#if !defined(AFX_JSMD_H__4A5B34AA_AE8F_4FF9_ABEE_43E64F8D6039__INCLUDED_)
#define AFX_JSMD_H__4A5B34AA_AE8F_4FF9_ABEE_43E64F8D6039__INCLUDED_

#include "Zjjl.h"	// Added by ClassView
#include "Xgjl.h"	// Added by ClassView
#include "Jtcyxx.h"	// Added by ClassView
#include "Sx.h"	// Added by ClassView
#include "Member.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Jsmd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CJsmd dialog

class CJsmd : public CDialog
{
// Construction
public:
	CMember jtcy;
	CSx sx;
	CJtcyxx jtcyxx;
	CXgjl xgjl;
	CZjjl zjjl;
	void InsertN(int,int);
	void DeleteN(int);
	CJsmd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CJsmd)
	enum { IDD = IDD_JSMD };
	CButton	m_sx;
	CButton	m_zjjl;
	CButton	m_xgjl;
	CButton	m_scjl;
	CButton	m_jtcyxx;
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJsmd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CJsmd)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonZjjl();
	afx_msg void OnButtonScjl();
	afx_msg void OnButtonXgjl();
	afx_msg void OnButtonJtcyxx();
	afx_msg void OnButtonSx();
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDblclkList(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedList1(NMHDR* pNMHDR, LRESULT* pResult);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JSMD_H__4A5B34AA_AE8F_4FF9_ABEE_43E64F8D6039__INCLUDED_)
