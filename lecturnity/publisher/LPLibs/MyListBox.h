#if !defined(AFX_MYLISTBOX_H__6ACFFFF8_92D4_4DEF_9710_217E1679ADFA__INCLUDED_)
#define AFX_MYLISTBOX_H__6ACFFFF8_92D4_4DEF_9710_217E1679ADFA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyListBox.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Fenster MyListBox 

class MyListBox : public CListBox
{
// Konstruktion
public:
	MyListBox();

// Attribute
public:

// Operationen
public:

// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(MyListBox)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
   virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~MyListBox();

   // Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(MyListBox)
		// HINWEIS - Der Klassen-Assistent f�gt hier Member-Funktionen ein und entfernt diese.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

private:
   COLORREF GetColorFromString(CString csText);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_MYLISTBOX_H__6ACFFFF8_92D4_4DEF_9710_217E1679ADFA__INCLUDED_
