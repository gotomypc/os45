#if !defined(AFX_SETTINGSWMPAGE_H__C6EA92E0_1D4C_4E16_ACE4_AD612254932F__INCLUDED_)
#define AFX_SETTINGSWMPAGE_H__C6EA92E0_1D4C_4E16_ACE4_AD612254932F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsWmPage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsWmPage 

class CSettingsWmPage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsWmPage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsWmPage)
	enum { IDD = IDD_SETTINGS_WM };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsWmPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsWmPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Member-Funktionen ein
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSWMPAGE_H__C6EA92E0_1D4C_4E16_ACE4_AD612254932F__INCLUDED_
