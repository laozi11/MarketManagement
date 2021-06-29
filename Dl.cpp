// Dl.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Dl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDl dialog


CDl::CDl(CWnd* pParent /*=NULL*/)
	: CDialog(CDl::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDl)
	m_mm = _T("");
	//}}AFX_DATA_INIT
}


void CDl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDl)
	DDX_Text(pDX, IDC_EDIT1, m_mm);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDl, CDialog)
	//{{AFX_MSG_MAP(CDl)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDCANCEL, &CDl::OnBnClickedCancel)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDl message handlers

void CDl::OnOK() 
{
	UpdateData(true);
	// TODO: Add extra validation here
	if(m_mm=="")
	{
		AfxMessageBox("密码不能为空!");
	}
	else if(m_mm=="111111")
	{
		CDialog::OnOK();
	}
	else
	{
		AfxMessageBox("密码错误!");
	}
}

void CDl::OnButton1() 
{
	// TODO: Add your control notification handler code here
	if(m_about.DoModal()==IDOK){}
}


void CDl::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
	exit(0);	
}
