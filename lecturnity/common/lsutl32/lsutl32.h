// lsutl32.h : Haupt-Header-Datei f�r die DLL LSUTL32
//

#if !defined(AFX_LSUTL32_H__469EB3D3_9795_41A8_B688_D31403E570E8__INCLUDED_)
#define AFX_LSUTL32_H__469EB3D3_9795_41A8_B688_D31403E570E8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// Hauptsymbole


/////////////////////////////////////////////////////////////////////////////
// CLsutl32App
// Siehe lsutl32.cpp f�r die Implementierung dieser Klasse
//

class CLsutl32App : public CWinApp
{
public:
	CLsutl32App();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CLsutl32App)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CLsutl32App)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_LSUTL32_H__469EB3D3_9795_41A8_B688_D31403E570E8__INCLUDED_)
