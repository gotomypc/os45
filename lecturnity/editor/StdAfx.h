// stdafx.h : Include-Datei f�r Standard-System-Include-Dateien,
//  oder projektspezifische Include-Dateien, die h�ufig benutzt, aber
//      in unregelm��igen Abst�nden ge�ndert werden.
//

#pragma message "Fail on Build... This project is dead. Use 'Uploader'...

#if !defined(AFX_STDAFX_H__74B36C89_44AA_47EA_86FD_54595965B021__INCLUDED_)
#define AFX_STDAFX_H__74B36C89_44AA_47EA_86FD_54595965B021__INCLUDED_

#ifndef WINVER
#define WINVER 0x0500
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0500
#endif

#pragma warning(disable: 4018 4244 4996)

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Selten verwendete Teile der Windows-Header nicht einbinden

#include <afxwin.h>         // MFC-Kern- und -Standardkomponenten
#include <afxext.h>         // MFC-Erweiterungen
#include <afxdisp.h>        // MFC Automatisierungsklassen
#include <afxdtctl.h>		// MFC-Unterst�tzung f�r allgemeine Steuerelemente von Internet Explorer 4
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC-Unterst�tzung f�r g�ngige Windows-Steuerelemente
#endif // _AFX_NO_AFXCMN_SUPPORT
#include <afxctl.h>

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#include <io.h>
#include <gdiplus.h>
#include <qedit.h>
#include <atlbase.h> // CComQIPtr, ...
#include <afxtempl.h> // CList, CArray
#include <comdef.h> // _bstr_t

#include <XTToolkitPro.h> 

#endif // !defined(AFX_STDAFX_H__74B36C89_44AA_47EA_86FD_54595965B021__INCLUDED_)
