#if !defined(AFX_SQXX_H__8510D6A8_1E5F_4EEC_9EA8_8C9C84E6A104__INCLUDED_)
#define AFX_SQXX_H__8510D6A8_1E5F_4EEC_9EA8_8C9C84E6A104__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Sqxx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSqxx dialog

class CSqxx : public CDialog
{
// Construction
public:
	CSqxx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSqxx)
	enum { IDD = IDD_SQXX };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqxx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSqxx)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQXX_H__8510D6A8_1E5F_4EEC_9EA8_8C9C84E6A104__INCLUDED_)
