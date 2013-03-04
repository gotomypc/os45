#if !defined(AFX_INTLFILENAMEWARNINGDLG_H__FE544685_29D2_4364_B8CA_0C86B61F3D08__INCLUDED_)
#define AFX_INTLFILENAMEWARNINGDLG_H__FE544685_29D2_4364_B8CA_0C86B61F3D08__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// IntlFilenameWarningDlg.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CIntlFilenameWarningDlg 

class CIntlFilenameWarningDlg : public CDialog
{
// Konstruktion
public:
	CIntlFilenameWarningDlg(CWnd* pParent = NULL);   // Standardkonstruktor

   bool GetDontShowDialogAgain() { return m_bDontShowDialogAgain; }

// Dialogfelddaten
	//{{AFX_DATA(CIntlFilenameWarningDlg)
	enum { IDD = IDD_INTL_FILENAME };
	CButton	m_cbDontWarn;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CIntlFilenameWarningDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CIntlFilenameWarningDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnYes();
	afx_msg void OnNo();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

   bool m_bDontShowDialogAgain;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_INTLFILENAMEWARNINGDLG_H__FE544685_29D2_4364_B8CA_0C86B61F3D08__INCLUDED_
