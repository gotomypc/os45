// filesdk.cpp : Legt die Initialisierungsroutinen f�r die DLL fest.
//

#include "stdafx.h"
#include "filesdk.h"

#include "MiscFunctions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//
//	Beachten Sie!
//
//		Wird diese DLL dynamisch an die MFC-DLLs gebunden,
//		muss bei allen von dieser DLL exportierten Funktionen,
//		die MFC-Aufrufe durchf�hren, das Makro AFX_MANAGE_STATE
//		direkt am Beginn der Funktion eingef�gt sein.
//
//		Beispiel:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//		// Hier normaler Funktionsrumpf
//		}
//
//		Es ist sehr wichtig, dass dieses Makro in jeder Funktion
//		vor allen MFC-Aufrufen erscheint. Dies bedeutet, dass es
//		als erste Anweisung innerhalb der Funktion ausgef�hrt werden
//		muss, sogar vor jeglichen Deklarationen von Objektvariablen,
//		da ihre Konstruktoren Aufrufe in die MFC-DLL generieren
//		k�nnten.
//
//		Siehe MFC Technical Notes 33 und 58 f�r weitere
//		Details.
//

/////////////////////////////////////////////////////////////////////////////
// CFilesdkApp

BEGIN_MESSAGE_MAP(CFilesdkApp, CWinApp)
	//{{AFX_MSG_MAP(CFilesdkApp)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFilesdkApp Konstruktion

CFilesdkApp::CFilesdkApp()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einf�gen
	// Alle wichtigen Initialisierungen in InitInstance platzieren
}

/////////////////////////////////////////////////////////////////////////////
// Das einzige CFilesdkApp-Objekt

CFilesdkApp theApp;

/* TODO remove alltogether (see also below); also remove dialog and string resources
bool __declspec(dllexport) CALLBACK  FileSdk_VerifyInternationalFilename(HWND hWndParent, _TCHAR *tszFileName, bool bSave)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());
   return StringManipulation::VerifyInternationalFilename(hWndParent, tszFileName, bSave);
}
*/

bool __declspec(dllexport) CALLBACK  FileSdk_ExploreLecturnityHome()
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());
   return Explore::ExploreLecturnityHome();
}

/*
bool __declspec(dllexport) CALLBACK FileSdk_Check16BitOrHigher()
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());
   return SystemInfo::Check16BitOrHigher();
}
*/