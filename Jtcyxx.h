#if !defined(AFX_JTCYXX_H__FD3AB2F4_AA52_4077_ABB9_A324588D6BE2__INCLUDED_)
#define AFX_JTCYXX_H__FD3AB2F4_AA52_4077_ABB9_A324588D6BE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Jtcyxx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CJtcyxx dialog

class CJtcyxx : public CDialog
{
// Construction
public:
	int p;
	CJtcyxx(CWnd* pParent = NULL);   // standard constructor
	void setP(int);

// Dialog Data
	//{{AFX_DATA(CJtcyxx)
	enum { IDD = IDD_JSMD_JTCYXX };
	CListCtrl	m_zeren;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJtcyxx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CJtcyxx)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JTCYXX_H__FD3AB2F4_AA52_4077_ABB9_A324588D6BE2__INCLUDED_)
