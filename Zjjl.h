#if !defined(AFX_ZJJL_H__4209CEB8_EFBD_4FD6_BDD1_109E240AD96B__INCLUDED_)
#define AFX_ZJJL_H__4209CEB8_EFBD_4FD6_BDD1_109E240AD96B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Zjjl.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZjjl dialog

class CZjjl : public CDialog
{
// Construction
public:
	CZjjl(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZjjl)
	enum { IDD = IDD_JSMD_ADD };
	int		m_edu;
	int		m_level;
	int		m_title;
	int		m_area;
	int		m_bm;
	int		m_by;
	CString	m_name;
	int		m_wm;
	int		m_num;
	int		m_wy;
	int		m_sex;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZjjl)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZjjl)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZJJL_H__4209CEB8_EFBD_4FD6_BDD1_109E240AD96B__INCLUDED_)
