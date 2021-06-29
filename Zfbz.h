#if !defined(AFX_ZFBZ_H__84F2A787_0BF2_4D36_B666_22A68D0B9770__INCLUDED_)
#define AFX_ZFBZ_H__84F2A787_0BF2_4D36_B666_22A68D0B9770__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Zfbz.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZfbz dialog

class CZfbz : public CDialog
{
// Construction
public:
	CZfbz(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZfbz)
	enum { IDD = IDD_ZFBZ };
	int		m_l0;
	int		m_l1;
	int		m_l2;
	int		m_l3;
	int		m_a0;
	int		m_a1;
	int		m_a2;
	int		m_a3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZfbz)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZfbz)
	virtual void OnOK();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZFBZ_H__84F2A787_0BF2_4D36_B666_22A68D0B9770__INCLUDED_)
