// jszfglxt.h : main header file for the JSZFGLXT application
//

#if !defined(AFX_JSZFGLXT_H__3345A39F_DFD9_40C0_BAF4_257300196431__INCLUDED_)
#define AFX_JSZFGLXT_H__3345A39F_DFD9_40C0_BAF4_257300196431__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJszfglxtApp:
// See jszfglxt.cpp for the implementation of this class
//

class CJszfglxtApp : public CWinApp
{
public:
	CJszfglxtApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJszfglxtApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJszfglxtApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JSZFGLXT_H__3345A39F_DFD9_40C0_BAF4_257300196431__INCLUDED_)
