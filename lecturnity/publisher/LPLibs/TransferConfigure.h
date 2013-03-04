#if !defined(AFX_TRANSFERCONFIGURE_H__C00CF8FD_4C4D_44D0_8740_309B60EBF78C__INCLUDED_)
#define AFX_TRANSFERCONFIGURE_H__C00CF8FD_4C4D_44D0_8740_309B60EBF78C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TransferConfigure.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CTransferConfigure 

class CTransferConfigure : public CPropertyPage
{
	DECLARE_DYNCREATE(CTransferConfigure)

// Konstruktion
public:
	CTransferConfigure();
	~CTransferConfigure();

// Dialogfelddaten
	//{{AFX_DATA(CTransferConfigure)
	enum { IDD = IDD_TRANSFER_CONFIGURE };
	CButton	m_rbScp;
	CButton	m_rbHttp;
	CStatic	m_lblPort;
	CButton	m_rbFtp;
	CStatic	m_lblTarget;
	CButton	m_rbLocal;
	//}}AFX_DATA


// �berschreibungen
	// Der Klassen-Assistent generiert virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTransferConfigure)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:
	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CTransferConfigure)
	afx_msg void OnTransferChangeTechnique();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TRANSFERCONFIGURE_H__C00CF8FD_4C4D_44D0_8740_309B60EBF78C__INCLUDED_
