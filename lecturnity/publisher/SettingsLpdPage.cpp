// SettingsLpdPage.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "Publisher.h"
#include "SettingsLpdPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSettingsLpdPage 


CSettingsLpdPage::CSettingsLpdPage(CWnd* pParent /*=NULL*/)
	: CCustomPropPage(CSettingsLpdPage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSettingsLpdPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier Elementinitialisierung ein
	//}}AFX_DATA_INIT
}


void CSettingsLpdPage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSettingsLpdPage)
		// HINWEIS: Der Klassen-Assistent f�gt hier DDX- und DDV-Aufrufe ein
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSettingsLpdPage, CCustomPropPage)
	//{{AFX_MSG_MAP(CSettingsLpdPage)
	ON_WM_HELPINFO()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen f�r Nachrichten CSettingsLpdPage 

BOOL CSettingsLpdPage::OnHelpInfo(HELPINFO* pHelpInfo) 
{
	// TODO: Code f�r die Behandlungsroutine f�r Nachrichten hier einf�gen und/oder Standard aufrufen
	
   MessageBox(_T("Sinnvolle Hilfestellung."), _T("Hilfe"), MB_ICONINFORMATION | MB_OK);

	return TRUE;// CCustomPropPage::OnHelpInfo(pHelpInfo);
}
