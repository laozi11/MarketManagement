#if !defined(AFX_ZJFY_H__FB021ED0_8FC8_46BF_8C0F_26266D276C58__INCLUDED_)
#define AFX_ZJFY_H__FB021ED0_8FC8_46BF_8C0F_26266D276C58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Zjfy.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZjfy dialog

class CZjfy : public CDialog
{
// Construction
public:
	CZjfy(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZjfy)
	enum { IDD = IDD_XFYXX_ADD };
	int		m_level;
	int		m_area;
	int		m_num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZjfy)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZjfy)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	//afx_msg void OnBnClickedOk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZJFY_H__FB021ED0_8FC8_46BF_8C0F_26266D276C58__INCLUDED_)
