#if !defined(AFX_SETTINGSLPDPAGE_H__99C58852_2A48_4E09_9641_28098FF01B9C__INCLUDED_)
#define AFX_SETTINGSLPDPAGE_H__99C58852_2A48_4E09_9641_28098FF01B9C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SettingsLpdPage.h : Header-Datei
//

#include "CustomPropPage.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsLpdPage 

class CSettingsLpdPage : public CCustomPropPage
{
// Konstruktion
public:
	CSettingsLpdPage(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CSettingsLpdPage)
	enum { IDD = IDD_SETTINGS_LPD };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSettingsLpdPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSettingsLpdPage)
	afx_msg BOOL OnHelpInfo(HELPINFO* pHelpInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_SETTINGSLPDPAGE_H__99C58852_2A48_4E09_9641_28098FF01B9C__INCLUDED_
