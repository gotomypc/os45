#if !defined(AFX_VIDEOCONTAINER_H__3DB6C382_8890_4259_8885_CF0FEE16DE6E__INCLUDED_)
#define AFX_VIDEOCONTAINER_H__3DB6C382_8890_4259_8885_CF0FEE16DE6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// VideoContainer.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Fenster CVideoContainer 

class CVideoContainer : public CStatic
{
// Konstruktion
public:
	CVideoContainer();

// Attribute
public:

// Operationen
public:

// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CVideoContainer)
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CVideoContainer();

	// Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(CVideoContainer)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_VIDEOCONTAINER_H__3DB6C382_8890_4259_8885_CF0FEE16DE6E__INCLUDED_
