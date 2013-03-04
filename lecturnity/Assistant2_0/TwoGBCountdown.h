#if !defined(AFX_TWOGBCOUNTDOWN_H__9DA4FBF9_D803_413A_9676_4152447625F6__INCLUDED_)
#define AFX_TWOGBCOUNTDOWN_H__9DA4FBF9_D803_413A_9676_4152447625F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TwoGBCountdown.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CTwoGBCountdown 

#include "..\Studio\Resource.h"

class CTwoGBCountdown : public CDialog
{
// Konstruktion
public:
	CTwoGBCountdown(CWnd* pParent = NULL);   // Standardkonstruktor

   void Update(int iSecondsLeft);

// Dialogfelddaten
	//{{AFX_DATA(CTwoGBCountdown)
	enum { IDD = IDD_2GB_COUNTDOWN };
	CStatic	m_wndTitle;
	CStatic	m_wndSeconds;
    CStatic m_wndWarning;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTwoGBCountdown)

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CTwoGBCountdown)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
   CFont m_font;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TWOGBCOUNTDOWN_H__9DA4FBF9_D803_413A_9676_4152447625F6__INCLUDED_
