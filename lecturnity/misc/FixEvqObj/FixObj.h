// FixObj.h : Haupt-Header-Datei f�r die Anwendung FIXOBJ
//

#if !defined(AFX_FIXOBJ_H__7C3E311B_92D2_40CB_8941_21CFDF628D90__INCLUDED_)
#define AFX_FIXOBJ_H__7C3E311B_92D2_40CB_8941_21CFDF628D90__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CFixObjApp:
// Siehe FixObj.cpp f�r die Implementierung dieser Klasse
//

class CFixObjApp : public CWinApp
{
public:
	CFixObjApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CFixObjApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CFixObjApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_FIXOBJ_H__7C3E311B_92D2_40CB_8941_21CFDF628D90__INCLUDED_)
