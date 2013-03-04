#if !defined(AFX_TEMPLATEPREVIEWDLG_H__9F8463FF_1266_4DD1_905C_5DCD8452C566__INCLUDED_)
#define AFX_TEMPLATEPREVIEWDLG_H__9F8463FF_1266_4DD1_905C_5DCD8452C566__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TemplatePreviewDlg.h : Header-Datei
//

#include "ImageStatic.h" // MfcUtils

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CTemplatePreviewDlg 

class CTemplatePreviewDlg : public CDialog
{
// Konstruktion
public:
	CTemplatePreviewDlg(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CTemplatePreviewDlg)
	enum { IDD = IDD_TEMPLATE_PREVIEW };
	CImageStatic	m_previewImg;
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CTemplatePreviewDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CTemplatePreviewDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

public:
   void SetPreviewImage(const _TCHAR *tszFileName);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // AFX_TEMPLATEPREVIEWDLG_H__9F8463FF_1266_4DD1_905C_5DCD8452C566__INCLUDED_
