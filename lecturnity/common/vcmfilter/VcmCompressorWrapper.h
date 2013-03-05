//
// VcmCompressorWrapper.h
//
// VCMCompressorWrapper

// Our GUID. Generated by the wizard to be unique.
// {15d1db62-3972-42e3-a567-8d43482c669e}
DEFINE_GUID(CLSID_VCMCOMPRESSORWRAPPER,
0x15d1db62, 0x3972, 0x42e3, 0xa5, 0x67, 0x8d, 0x43, 0x48, 0x2c, 0x66, 0x9e);

class CVCMWrapperOutputPin : public CTransformOutputPin, public IAMVideoCompression
{
   friend class CVCMCompressorWrapper;
public:
   CVCMWrapperOutputPin(
      TCHAR *pObjectName,
      CTransformFilter *pTransformFilter,
      HRESULT * phr,
      LPCWSTR pName);
   virtual ~CVCMWrapperOutputPin();

   DECLARE_IUNKNOWN
   STDMETHODIMP NonDelegatingQueryInterface(REFIID riid, void **ppv);

   // IAMVideoCompression
   STDMETHODIMP put_KeyFrameRate(long lKeyFrameRate);
   STDMETHODIMP get_KeyFrameRate(long *plKeyFrameRate);
   STDMETHODIMP put_PFramesPerKeyFrame(long lPFramesPerKeyFrame);
   STDMETHODIMP get_PFramesPerKeyFrame(long *plPFramesPerKeyFrame);
   STDMETHODIMP put_Quality(double dQuality);
   STDMETHODIMP get_Quality(double *dQuality);
   STDMETHODIMP put_WindowSize(DWORDLONG dwWindowSize);
   STDMETHODIMP get_WindowSize(DWORDLONG *pdwWindowSize);
   STDMETHODIMP GetInfo(
      WCHAR *pszVersion,
      int   *pcbVersion,
      LPWSTR pszDescription,
      int   *pcbDescription,
      long  *pDefaultKeyFrameRate,
      long  *pDefaultPFramesPerKeyFrame,
      double *pDefaultQuality,
      long  *pCapabilities);
   STDMETHODIMP OverrideKeyFrame(long lFrameNumber);
   STDMETHODIMP OverrideFrameSize(long lFrameNumber, long lSize);
};

class CVCMWrapperInputPin : public CTransformInputPin
{
   friend class CVCMCompressorWrapper;
public:
   CVCMWrapperInputPin(
      TCHAR *pObjectName,
      CTransformFilter *pTransformFilter,
      HRESULT * phr,
      LPCWSTR pName);
   virtual ~CVCMWrapperInputPin();
};

//
// CVcmCompressorWrapper
//
class CVCMCompressorWrapper : public CTransformFilter, public IAMVfwCompressDialogs
{
   friend class CVCMWrapperOutputPin;
public:
   
   // filter object registration information
   static const AMOVIESETUP_FILTER sudFilter;
   static const AMOVIESETUP_MEDIATYPE sudInputTypes[];
   static const AMOVIESETUP_MEDIATYPE sudOutputTypes[];
   static const AMOVIESETUP_PIN sudPins[];
   
   // called to create the COM filter oject
   static CUnknown *WINAPI CreateInstance(LPUNKNOWN punk, HRESULT *phr);
   
   virtual ~CVCMCompressorWrapper();
   
   virtual CBasePin *GetPin(int i);
   
   DECLARE_IUNKNOWN;
   STDMETHODIMP NonDelegatingQueryInterface(REFIID riid, void **ppv);

   virtual HRESULT CheckConnect(PIN_DIRECTION pinDir, IPin *pPin);
   virtual HRESULT BreakConnect(PIN_DIRECTION pinDir);
   virtual HRESULT CheckInputType(const CMediaType *pmtIn);
   virtual HRESULT CheckTransform(const CMediaType *pmtIn, const CMediaType *pmtOut);
   virtual HRESULT DecideBufferSize(IMemAllocator *pAlloc, ALLOCATOR_PROPERTIES *ppropInputRequest);
   virtual HRESULT GetMediaType(int iPosition, CMediaType *pMediaType);
   virtual HRESULT Transform(IMediaSample *pIn, IMediaSample *pOut);

   // IAMVfwCompressDialogs
   STDMETHODIMP ShowDialog(int iDialog, HWND hWnd);
   STDMETHODIMP GetState(LPVOID pState, int *pcbState);
   STDMETHODIMP SetState(LPVOID pState, int cbState);
   STDMETHODIMP SendDriverMessage(int uMsg, long dw1, long dw2);
private:
   // Constructor - just calls the base class constructor
   CVCMCompressorWrapper(TCHAR *tszName, LPUNKNOWN punk, HRESULT *phr);
   
   // return the number of pins this filter has
   /* virtual int           GetPinCount(); */
   
   // pointer to a pin.
   /* virtual CBasePin* GetPin(int n); */
   // use to serialize access to filter interface methods.
   CCritSec m_FilterLock;
   
   CMediaType m_mediaTypeIn;
   CMediaType m_mediaTypeOut;
   int        m_codecOffset;
   DWORD      m_fccHandler; // In case of DivX: 'divx', and _not_ 'DX50';
   HIC        m_hic;
   ICINFO     m_icInfo;
   int        m_outBufferSize;
   BYTE      *m_pPrevImage;
   bool       m_prevImageExists;

   bool       m_firstTransformDone;
   bool       m_useKeyFrames;
   bool       m_supportsKeyFrames;
   DWORD      m_keyFrameRate;
   DWORD      m_defaultKeyFrameRate;
   bool       m_supportsQuality;
   double     m_defaultQuality;
   double     m_quality;
   bool       m_supportsDatarate;
   bool       m_useDataRate;
   DWORD      m_dataRateKbS;

   DWORD      m_lFrameNum;
   DWORD      m_lastKeyFrame;
   LONGLONG   m_lastFrameTime;
   
   HIC OpenAndCheckCompressor();
   
   // CBaseFilter derived objects cannot be copied
   CVCMCompressorWrapper(const CVCMCompressorWrapper&);
   CVCMCompressorWrapper& operator=(const CVCMCompressorWrapper&);
};