// ExtSplitter.cpp : implementation file
//
#include "stdafx.h"
#include "Msp.h"
#include "ExtSplitter.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExtSplitter

CExtSplitter::CExtSplitter():
    m_nHidedCol(-1)

{
}

CExtSplitter::~CExtSplitter()
{
}


void CExtSplitter::ShowColumn()
{
	ASSERT_VALID(this);
   ASSERT(m_nCols < m_nMaxCols);
   ASSERT(m_nHidedCol != -1);

   int colNew = m_nHidedCol;
   m_nHidedCol = -1;
   int cxNew = m_pColInfo[m_nCols].nCurSize;
   m_nCols++;    // add a column
   ASSERT(m_nCols == m_nMaxCols);

   // fill the hidden column
   int col;
   for (int row = 0; row < m_nRows; row++)
   {
      CWnd* pPaneShow = GetDlgItem(
         AFX_IDW_PANE_FIRST + row * 16 + m_nCols);
      ASSERT(pPaneShow != NULL);
      pPaneShow->ShowWindow(SW_SHOWNA);

      for (col = m_nCols - 2; col >= colNew; col--)
      {
         CWnd* pPane = GetPane(row, col);
         ASSERT(pPane != NULL);
         pPane->SetDlgCtrlID(IdFromRowCol(row, col + 1));
      }

      pPaneShow->SetDlgCtrlID(IdFromRowCol(row, colNew));
   }

   // new panes have been created -- recalculate layout
   for (col = colNew + 1; col < m_nCols; col++)
      m_pColInfo[col].nIdealSize = m_pColInfo[col - 1].nCurSize;
   m_pColInfo[colNew].nIdealSize = cxNew;
   RecalcLayout();


}

void CExtSplitter::HideColumn(int colHide)
{
	ASSERT_VALID(this);
   ASSERT(m_nCols > 1);
   ASSERT(colHide < m_nCols);
   ASSERT(m_nHidedCol == -1);
   m_nHidedCol = colHide;

   // if the column has an active window -- change it
   int rowActive, colActive;
   if (GetActivePane(&rowActive, &colActive) != NULL &&
       colActive == colHide)
   {
      if (++colActive >= m_nCols)
         colActive = 0;
      SetActivePane(rowActive, colActive);
   }

   // hide all column panes
   for (int row = 0; row < m_nRows; row++)
   {
      CWnd* pPaneHide = GetPane(row, colHide);
      ASSERT(pPaneHide != NULL);
      pPaneHide->ShowWindow(SW_HIDE);
      pPaneHide->SetDlgCtrlID(
         AFX_IDW_PANE_FIRST + row * 16 + m_nCols);

      for (int col = colHide + 1; col < m_nCols; col++)
      {
         CWnd* pPane = GetPane(row, col);
         ASSERT(pPane != NULL);
         pPane->SetDlgCtrlID(IdFromRowCol(row, col - 1));
      }
   }
   m_nCols--;
   m_pColInfo[m_nCols].nCurSize = m_pColInfo[colHide].nCurSize;
    RecalcLayout();

}


BEGIN_MESSAGE_MAP(CExtSplitter, CSplitterWnd)
	//{{AFX_MSG_MAP(CExtSplitter)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExtSplitter message handlers
