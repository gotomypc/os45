#if !defined(AFX_IMPORTCLIPAUDIODLG_H__8C514F0B_FD34_4A77_8D53_E69F337824A2__INCLUDED_)
#define AFX_IMPORTCLIPAUDIODLG_H__8C514F0B_FD34_4A77_8D53_E69F337824A2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImportClipAudioDlg.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CImportClipAudioDlg 

class CImportClipAudioDlg : public CDialog
{
// Konstruktion
public:
	CImportClipAudioDlg(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CImportClipAudioDlg)
	enum { IDD = IDD_IMPORT_CLIP_AUDIO };
	CComboBox	m_pdAudio;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CImportClipAudioDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CImportClipAudioDlg)
	afx_msg void OnNoAudio();
	virtual BOOL OnInitDialog();
	afx_msg void OnUseAudio();
	virtual void OnCancel();
	afx_msg void OnCancelAudio();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_IMPORTCLIPAUDIODLG_H__8C514F0B_FD34_4A77_8D53_E69F337824A2__INCLUDED_
