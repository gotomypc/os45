// SettingsRmPage.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "publisher.h"
#include "SettingsRmPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsRmPage 


CSettingsRmPage::CSettingsRmPage(CWnd* pParent /*=NULL*/)
	: CCustomPropPage(CSettingsRmPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSettingsRmPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Elementinitialisierung ein
	//}}AFX_DATA_INIT
}


void CSettingsRmPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSettingsRmPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier DDX- und DDV-Aufrufe ein
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSettingsRmPage, CCustomPropPage)
	//{{AFX_MSG_MAP(CSettingsRmPage)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen f�r Nachrichten CSettingsRmPage 

BOOL CSettingsRmPage::OnInitDialog() 
{
	CCustomPropPage::OnInitDialog();
	
	// TODO: Zus�tzliche Initialisierung hier einf�gen

   return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX-Eigenschaftenseiten sollten FALSE zur�ckgeben
}
