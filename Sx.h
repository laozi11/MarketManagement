#if !defined(AFX_SX_H__5E4CA301_1D1C_4EB5_9BEF_C8751434AA5C__INCLUDED_)
#define AFX_SX_H__5E4CA301_1D1C_4EB5_9BEF_C8751434AA5C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Sx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSx dialog

class CSx : public CDialog
{
// Construction
public:
	CSx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSx)
	enum { IDD = IDD_JSMD_SCR };
	//BOOL	m_age;
	BOOL	m_edu;
	BOOL	m_level;
	BOOL	m_name;
	BOOL	m_sex;
	BOOL	m_title;
	BOOL	m_work;
	int		m_educ;
	int		m_levelc;
	int		m_titlec;
	CString	m_namee;
	int		m_sexr;
	//int		m_titler;
	//int		m_edur;
	//int		m_levelr;
	//int		m_ager;
	int		m_wager;
	//int		m_agee;
	int		m_worke;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSx)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SX_H__5E4CA301_1D1C_4EB5_9BEF_C8751434AA5C__INCLUDED_)
