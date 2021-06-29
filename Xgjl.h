#if !defined(AFX_XGJL_H__5250121A_77C4_491F_BCEE_132C307ACB81__INCLUDED_)
#define AFX_XGJL_H__5250121A_77C4_491F_BCEE_132C307ACB81__INCLUDED_

#include "Member.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Xgjl.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CXgjl dialog

class CXgjl : public CDialog
{
// Construction
public:
	CMember jtcy;
	void setP(int);
	int p;
	CXgjl(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CXgjl)
	enum { IDD = IDD_JSMD_CHAN };
	int		m_edu;
	int		m_level;
	int		m_money;
	int		m_bm;
	int		m_by;
	CString	m_name;
	int		m_wm;
	int		m_wy;
	int		m_sex;
	int		m_title;
	int		m_num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXgjl)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CXgjl)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XGJL_H__5250121A_77C4_491F_BCEE_132C307ACB81__INCLUDED_)
