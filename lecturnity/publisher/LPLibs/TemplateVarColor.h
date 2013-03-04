#if !defined(AFX_TEMPLATEVARCOLOR_H__DB1751F8_039D_47B8_94ED_BE1BEB447D45__INCLUDED_)
#define AFX_TEMPLATEVARCOLOR_H__DB1751F8_039D_47B8_94ED_BE1BEB447D45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TemplateVarColor.h : Header-Datei
//

#include "ColorStatic.h"
#include "TemplateEngine.h"

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CTemplateVarColor 

class CTemplateVarColor : public CDialog
{
// Konstruktion
public:
	CTemplateVarColor(CTemplateKeyword *pKeyword);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CTemplateVarColor)
	enum { IDD = IDD_TEMPLATE_VAR_COLOR };
	CEdit	m_edVarName;
	CColorStatic	m_clrStatic;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTemplateVarColor)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CTemplateVarColor)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG

//   virtual afx_msg void OnColorChanged(WPARAM wParam, LPARAM lParam);
   virtual afx_msg LRESULT OnColorChanged(WPARAM wParam, LPARAM lParam);
   virtual afx_msg void OnColorChanged();

	DECLARE_MESSAGE_MAP()

   CTemplateColorKeyword *m_pKeyword;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TEMPLATEVARCOLOR_H__DB1751F8_039D_47B8_94ED_BE1BEB447D45__INCLUDED_
