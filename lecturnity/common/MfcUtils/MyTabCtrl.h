// MyTabCtrl.h: Schnittstelle f�r die Klasse CMyTabCtrl.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYTABCTRL_H__A6F60329_2D19_441F_8269_E6CCF075E54C__INCLUDED_)
#define AFX_MYTABCTRL_H__A6F60329_2D19_441F_8269_E6CCF075E54C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMyTabCtrl : public CTabCtrl
{
public:
	CMyTabCtrl();
	virtual ~CMyTabCtrl();

// Dialogfelddaten
	//{{AFX_DATA(CCustomPropPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CCustomPropPage)
	protected:
	//}}AFX_VIRTUAL

// Implementierung
protected:
	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CCustomPropPage)
   afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
   DECLARE_MESSAGE_MAP()
};

#endif // !defined(AFX_MYTABCTRL_H__A6F60329_2D19_441F_8269_E6CCF075E54C__INCLUDED_)
