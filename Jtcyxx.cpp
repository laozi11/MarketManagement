// Jtcyxx.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Jtcyxx.h"
#include "Nlist.h"

extern CNlist user[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJtcyxx dialog


CJtcyxx::CJtcyxx(CWnd* pParent /*=NULL*/)
	: CDialog(CJtcyxx::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJtcyxx)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CJtcyxx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJtcyxx)
	DDX_Control(pDX, IDC_LIST_FAMILY, m_zeren);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CJtcyxx, CDialog)
	//{{AFX_MSG_MAP(CJtcyxx)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJtcyxx message handlers

BOOL CJtcyxx::OnInitDialog() 
{
	CDialog::OnInitDialog();

	CString u,v,o;
	
	// TODO: Add extra initialization here
	m_zeren.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_zeren.InsertColumn(0,"姓名",LVCFMT_CENTER,60);
	m_zeren.InsertColumn(1,"性别",LVCFMT_CENTER,60);
	m_zeren.InsertColumn(2,"出生年月",LVCFMT_CENTER,90);

	for (int i=0;i<user[p].num;i++)
	{
		m_zeren.InsertItem(i,user[p].mem[i].name);

		switch (user[p].mem[i].sex)
		{	
			case 0: m_zeren.SetItemText(i,1,"男");break;
			case 1: m_zeren.SetItemText(i,1,"女");break;
		}

		u.Format(_T("%d"),user[p].mem[i].by);
		v.Format(_T("%d"),user[p].mem[i].bm);
		o=u+'.'+v;
		m_zeren.SetItemText(i,2,o);
	}

	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
