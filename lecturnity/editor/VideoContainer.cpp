// VideoContainer.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "editor.h"
#include "VideoContainer.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVideoContainer

CVideoContainer::CVideoContainer()
{
}

CVideoContainer::~CVideoContainer()
{
}


BEGIN_MESSAGE_MAP(CVideoContainer, CStatic)
	//{{AFX_MSG_MAP(CVideoContainer)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen f�r Nachrichten CVideoContainer 

BOOL CVideoContainer::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Code f�r die Behandlungsroutine f�r Nachrichten hier einf�gen und/oder Standard aufrufen
	
	//return CStatic::OnEraseBkgnd(pDC);
   return TRUE;
}

void CVideoContainer::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Code f�r die Behandlungsroutine f�r Nachrichten hier einf�gen
	
	// Kein Aufruf von CStatic::OnPaint() f�r Zeichnungsnachrichten
}
