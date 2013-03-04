#if !defined(AFX_TEMPLATEDLG_H__EFFEF271_E367_4564_BA62_3C8466F6A366__INCLUDED_)
#define AFX_TEMPLATEDLG_H__EFFEF271_E367_4564_BA62_3C8466F6A366__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TemplateDlg.h : Header-Datei
//

#include "MySheet.h"

#include "TemplateSelectPage.h"
#include "TemplateConfigurePage.h"

/////////////////////////////////////////////////////////////////////////////
// CTemplateDlg

class CTemplateDlg : public CMySheet
{
	DECLARE_DYNAMIC(CTemplateDlg)

// Konstruktion
public:
	CTemplateDlg(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CTemplateDlg(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attribute
public:

// Operationen
public:

// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTemplateDlg)
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CTemplateDlg();

	// Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(CTemplateDlg)
		// HINWEIS - Der Klassen-Assistent f�gt hier Member-Funktionen ein und entfernt diese.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

   CTemplateSelectPage    *m_pTemplateSelect;
   CTemplateConfigurePage *m_pTemplateConfigure;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TEMPLATEDLG_H__EFFEF271_E367_4564_BA62_3C8466F6A366__INCLUDED_
