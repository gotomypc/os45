#if !defined(AFX_SETTINGSTARGETPAGE_H__E9E0E884_CFD0_4291_B052_A53C4D1C0ED1__INCLUDED_)
#define AFX_SETTINGSTARGETPAGE_H__E9E0E884_CFD0_4291_B052_A53C4D1C0ED1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsTargetPage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsTargetPage 

class CSettingsTargetPage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsTargetPage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsTargetPage)
	enum { IDD = IDD_SETTINGS_TARGET };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsTargetPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsTargetPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Member-Funktionen ein
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSTARGETPAGE_H__E9E0E884_CFD0_4291_B052_A53C4D1C0ED1__INCLUDED_
