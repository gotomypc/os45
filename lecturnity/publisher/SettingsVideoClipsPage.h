#if !defined(AFX_SETTINGSVIDEOCLIPSPAGE_H__B79A7DDC_B19A_4AEE_8C26_CC119AF7754D__INCLUDED_)
#define AFX_SETTINGSVIDEOCLIPSPAGE_H__B79A7DDC_B19A_4AEE_8C26_CC119AF7754D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsVideoClipsPage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsVideoClipsPage 

class CSettingsVideoClipsPage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsVideoClipsPage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsVideoClipsPage)
	enum { IDD = IDD_SETTINGS_VIDEOCLIPS };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsVideoClipsPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsVideoClipsPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Member-Funktionen ein
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSVIDEOCLIPSPAGE_H__B79A7DDC_B19A_4AEE_8C26_CC119AF7754D__INCLUDED_
