// cdStart_doIt.h : Haupt-Header-Datei f�r die Anwendung CDSTART_DOIT
//

#if !defined(AFX_CDSTART_DOIT_H__78872332_DA38_4977_89EE_011D4BD32C9A__INCLUDED_)
#define AFX_CDSTART_DOIT_H__78872332_DA38_4977_89EE_011D4BD32C9A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CCdStart_doItApp:
// Siehe cdStart_doIt.cpp f�r die Implementierung dieser Klasse
//

class CCdStart_doItApp : public CWinApp
{
public:
	CCdStart_doItApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CCdStart_doItApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CCdStart_doItApp)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_CDSTART_DOIT_H__78872332_DA38_4977_89EE_011D4BD32C9A__INCLUDED_)
