#if !defined(AFX_DLGCOLORBUTTON_H__ABD65BFC_8752_4C66_9C29_DCEAC5BC991D__INCLUDED_)
#define AFX_DLGCOLORBUTTON_H__ABD65BFC_8752_4C66_9C29_DCEAC5BC991D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ColorButton.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Fenster CDlgColorButton 

class CDlgColorButton : public CXTColorPicker
{
// Konstruktion
public:
	CDlgColorButton();

// Attribute
public:

// Operationen
public:

// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CDlgColorButton)
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CDlgColorButton();

	// Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(CDlgColorButton)
		// HINWEIS - Der Klassen-Assistent f�gt hier Member-Funktionen ein und entfernt diese.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
		
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);

};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_DLGCOLORBUTTON_H__ABD65BFC_8752_4C66_9C29_DCEAC5BC991D__INCLUDED_
