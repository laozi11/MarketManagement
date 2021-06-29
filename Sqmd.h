#if !defined(AFX_SQMD_H__C930DCFA_A849_44B3_81EC_1865AAD2C5C5__INCLUDED_)
#define AFX_SQMD_H__C930DCFA_A849_44B3_81EC_1865AAD2C5C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Sqmd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSqmd dialog

class CSqmd : public CDialog
{
// Construction
public:
	int p;
	CSqmd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSqmd)
	enum { IDD = IDD_XFYXX_SQMD };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqmd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSqmd)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQMD_H__C930DCFA_A849_44B3_81EC_1865AAD2C5C5__INCLUDED_)
