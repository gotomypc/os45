#if !defined(AFX_WARNING16BIT_H__30897C9D_B3CC_49DA_8932_3FBA4F9D1AB8__INCLUDED_)
#define AFX_WARNING16BIT_H__30897C9D_B3CC_49DA_8932_3FBA4F9D1AB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Warning16Bit.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CWarning16Bit 

class CWarning16Bit : public CDialog
{
// Konstruktion
public:
	CWarning16Bit(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CWarning16Bit)
	enum { IDD = IDD_16BIT_WARNING_E };
	CButton	m_cbbDoNotDisplayAgain;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CWarning16Bit)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CWarning16Bit)
	virtual BOOL OnInitDialog();
	afx_msg void OnYes();
	afx_msg void OnNo();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
   void CheckCheckBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_WARNING16BIT_H__30897C9D_B3CC_49DA_8932_3FBA4F9D1AB8__INCLUDED_
