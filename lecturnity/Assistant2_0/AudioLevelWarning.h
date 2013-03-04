#if !defined(AFX_AUDIOLEVELWARNING_H__417E49E1_DA51_4019_8E8A_7B70499D13AB__INCLUDED_)
#define AFX_AUDIOLEVELWARNING_H__417E49E1_DA51_4019_8E8A_7B70499D13AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AudioLevelWarning.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CAudioLevelWarning 

#include "..\Studio\Resource.h"

#include "HelpInfo.h"

class CAudioLevelWarning : public CDialog
{
// Konstruktion
public:
	CAudioLevelWarning(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CAudioLevelWarning)
	enum { IDD = IDD_AUDIO_LEVEL_WARNING };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CAudioLevelWarning)
	public:
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CAudioLevelWarning)
	virtual BOOL OnInitDialog();
	afx_msg void OnHelp();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
   CHelpInfo m_tooltipHelp;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_AUDIOLEVELWARNING_H__417E49E1_DA51_4019_8E8A_7B70499D13AB__INCLUDED_
