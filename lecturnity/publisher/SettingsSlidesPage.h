#if !defined(AFX_SETTINGSSLIDESPAGE_H__348C5258_EB16_4DBC_B4FB_72B3D3D45766__INCLUDED_)
#define AFX_SETTINGSSLIDESPAGE_H__348C5258_EB16_4DBC_B4FB_72B3D3D45766__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsSlidesPage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsSlidesPage 

class CSettingsSlidesPage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsSlidesPage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsSlidesPage)
	enum { IDD = IDD_SETTINGS_SLIDES };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsSlidesPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsSlidesPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Member-Funktionen ein
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSSLIDESPAGE_H__348C5258_EB16_4DBC_B4FB_72B3D3D45766__INCLUDED_
