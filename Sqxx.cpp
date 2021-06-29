// Sqxx.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Sqxx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSqxx dialog


CSqxx::CSqxx(CWnd* pParent /*=NULL*/)
	: CDialog(CSqxx::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSqxx)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSqxx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSqxx)
	DDX_Control(pDX, IDC_LIST1, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSqxx, CDialog)
	//{{AFX_MSG_MAP(CSqxx)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSqxx message handlers

BOOL CSqxx::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	


	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
