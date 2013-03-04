// pptresources.h : Hauptheaderdatei f�r die pptresources-DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei f�r PCH einschlie�en"
#endif

#include "resource.h"		// Hauptsymbole


// CpptresourcesApp
// Siehe pptresources.cpp f�r die Implementierung dieser Klasse
//

class CpptresourcesApp : public CWinApp
{
public:
	CpptresourcesApp();

// �berschreibungen
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
public:
   HRESULT ShowImportWizards(const WCHAR * wszPPTName, int iSlideCount, int iCurrentSlide, WCHAR * wszSlideSelection);
};
