#if !defined(AFX_INSERTSTOPMARKDIALOG_H__8B8E8970_680B_424A_AD94_AF9C58F93CF7__INCLUDED_)
#define AFX_INSERTSTOPMARKDIALOG_H__8B8E8970_680B_424A_AD94_AF9C58F93CF7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "..\Studio\resource.h"

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CInsertStopmarkDialog 

class CInsertStopmarkDialog : public CDialog
{
// Konstruktion
public:
	CInsertStopmarkDialog(CWnd* pParent = NULL);   // Standardkonstruktor
	CInsertStopmarkDialog(CWnd* pParent, int &nCheckID);  
// Dialogfelddaten
	//{{AFX_DATA(CInsertStopmarkDialog)
	enum { IDD = IDD_INSERT_STOPMARK };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CInsertStopmarkDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung

protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CInsertStopmarkDialog)
	virtual void OnCancel();
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	int *m_nCheckID;

public:
	static void ShowDialog(CWnd* pParent, int &nCheckID);


};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_INSERTSTOPMARKDIALOG_H__8B8E8970_680B_424A_AD94_AF9C58F93CF7__INCLUDED_
