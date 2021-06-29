// jszfglxtDlg.h : header file
//

#if !defined(AFX_JSZFGLXTDLG_H__2B04CDAD_D267_4A7C_93B0_2465484644FB__INCLUDED_)
#define AFX_JSZFGLXTDLG_H__2B04CDAD_D267_4A7C_93B0_2465484644FB__INCLUDED_

#include "Xfyxx.h"	// Added by ClassView
#include "Jsmd.h"
#include "Sqxx.h"	// Added by ClassView
#include "Zfbz.h"	// Added by ClassView
#include "Dl.h"	// Added by ClassView

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJszfglxtDlg dialog

class CJszfglxtDlg : public CDialog
{
// Construction
public:
	CDl m_dl;
	CZfbz zfbz;
	CXfyxx xfyxx;
	CSqxx sqxx;
	CJsmd jsmd;
	CJszfglxtDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJszfglxtDlg)
	enum { IDD = IDD_JSZFGLXT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJszfglxtDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJszfglxtDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnCancel();
	afx_msg void OnJsmd();
	afx_msg void OnZfbz();
	afx_msg void OnFyxx();
	afx_msg void OnSqxx();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JSZFGLXTDLG_H__2B04CDAD_D267_4A7C_93B0_2465484644FB__INCLUDED_)
