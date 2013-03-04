// tutorial.h : Haupt-Header-Datei f�r die Anwendung TUTORIAL
//

#if !defined(AFX_TUTORIAL_H__137EC4C7_26BD_4D6C_AB4F_78D005D1FBA3__INCLUDED_)
#define AFX_TUTORIAL_H__137EC4C7_26BD_4D6C_AB4F_78D005D1FBA3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include <Atlbase.h>
#include "resource.h"		// Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CTutorialApp:
// Siehe tutorial.cpp f�r die Implementierung dieser Klasse
//

class CTutorialApp : public CWinApp
{
private:

   void readTutorialPath();
   bool isPathValid();
public:
   static char g_szTutorialPath[512];
   static LCID g_languageID;

	CTutorialApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CTutorialApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CTutorialApp)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_TUTORIAL_H__137EC4C7_26BD_4D6C_AB4F_78D005D1FBA3__INCLUDED_)
