#if !defined(AFX_XFYXX_H__576C2097_223B_4C02_A173_A47EE42107E7__INCLUDED_)
#define AFX_XFYXX_H__576C2097_223B_4C02_A173_A47EE42107E7__INCLUDED_

#include "Zjfy.h"	// Added by ClassView
#include "Xgxx.h"	// Added by ClassView
#include "Sqzf.h"	// Added by ClassView
#include "Sqmd.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Xfyxx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CXfyxx dialog

class CXfyxx : public CDialog
{
// Construction
public:
	CSqmd sqmd;
	CSqzf sqzf;
	CXgxx xgxx;
	void DeleteN(int);
	void InsertN(int,int);
	CZjfy zjfy;
	CXfyxx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CXfyxx)
	enum { IDD = IDD_XFYXX };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXfyxx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CXfyxx)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonZjfy();
	afx_msg void OnButtonScfy();
	afx_msg void OnButtonXgxx();
	afx_msg void OnButtonSqzf();
	afx_msg void OnButtonSqmd();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XFYXX_H__576C2097_223B_4C02_A173_A47EE42107E7__INCLUDED_)
extern __declspec(selectany) BOOL success = false;