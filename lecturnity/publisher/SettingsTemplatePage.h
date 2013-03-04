#if !defined(AFX_SETTINGSTEMPLATEPAGE_H__06CDAA67_00D4_463C_B7A4_C56BBBEF00C2__INCLUDED_)
#define AFX_SETTINGSTEMPLATEPAGE_H__06CDAA67_00D4_463C_B7A4_C56BBBEF00C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsTemplatePage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsTemplatePage 

class CSettingsTemplatePage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsTemplatePage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsTemplatePage)
	enum { IDD = IDD_SETTINGS_TEMPLATE };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsTemplatePage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsTemplatePage)
	afx_msg void OnTemplateConfigure();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSTEMPLATEPAGE_H__06CDAA67_00D4_463C_B7A4_C56BBBEF00C2__INCLUDED_
