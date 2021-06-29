#if !defined(AFX_DL_H__84FFD4F7_C649_43E0_A3AC_03F2B9E50D97__INCLUDED_)
#define AFX_DL_H__84FFD4F7_C649_43E0_A3AC_03F2B9E50D97__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dl.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDl dialog

class CDl : public CDialog
{
// Construction
public:
	CDialog m_about;
	CDl(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDl)
	enum { IDD = IDD_DIALOG1 };
	CString	m_mm;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDl)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDl)
	virtual void OnOK();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DL_H__84FFD4F7_C649_43E0_A3AC_03F2B9E50D97__INCLUDED_)
