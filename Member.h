#if !defined(AFX_MEMBER_H__D1FA1D21_FE55_4328_94C1_D3D13FD3872D__INCLUDED_)
#define AFX_MEMBER_H__D1FA1D21_FE55_4328_94C1_D3D13FD3872D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Member.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMember dialog

class CMember : public CDialog
{
// Construction
public:
	CMember(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMember)
	enum { IDD = IDD_JSMD_ADD_MEMBER };
	int		m_m;
	int		m_y;
	CString	m_n;
	int		m_s;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMember)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMember)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MEMBER_H__D1FA1D21_FE55_4328_94C1_D3D13FD3872D__INCLUDED_)
