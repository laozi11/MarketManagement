#if !defined(AFX_XGXX_H__FAC71C83_C6F2_42B1_B2D5_E23F680F8329__INCLUDED_)
#define AFX_XGXX_H__FAC71C83_C6F2_42B1_B2D5_E23F680F8329__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Xgxx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CXgxx dialog

class CXgxx : public CDialog
{
// Construction
public:
	int p;
	CXgxx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CXgxx)
	enum { IDD = IDD_XFYXX_CHAN };
	int		m_level;
	int		m_area;
	int		m_num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXgxx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CXgxx)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XGXX_H__FAC71C83_C6F2_42B1_B2D5_E23F680F8329__INCLUDED_)
