#if !defined(AFX_SQZF_H__89042DD1_4389_44CC_B8B3_79CEF1F8AF5E__INCLUDED_)
#define AFX_SQZF_H__89042DD1_4389_44CC_B8B3_79CEF1F8AF5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Sqzf.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSqzf dialog

class CSqzf : public CDialog
{
// Construction
public:
	int p;
	void InsertN(int, int);
	CSqzf(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSqzf)
	enum { IDD = IDD_XFYXX_APP };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqzf)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSqzf)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonSqzf();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQZF_H__89042DD1_4389_44CC_B8B3_79CEF1F8AF5E__INCLUDED_)
