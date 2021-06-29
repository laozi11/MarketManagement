// Sqmd.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Sqmd.h"
#include "Nlist.h"
#include "Flist.h"

extern CNlist user[20];
extern CFlist flat[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSqmd dialog


CSqmd::CSqmd(CWnd* pParent /*=NULL*/)
	: CDialog(CSqmd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSqmd)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSqmd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSqmd)
	DDX_Control(pDX, IDC_LIST1, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSqmd, CDialog)
	//{{AFX_MSG_MAP(CSqmd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSqmd message handlers

BOOL CSqmd::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	
	//表头
	m_list.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_list.InsertColumn(0,"姓名",LVCFMT_CENTER,120);
	m_list.InsertColumn(1,"起租日期",LVCFMT_CENTER,120);
	m_list.InsertColumn(2,"停租日期",LVCFMT_CENTER,120);
	m_list.InsertColumn(3,"经营门类",LVCFMT_CENTER,120);
	m_list.InsertColumn(4,"店铺类型",LVCFMT_CENTER,120);
	
	//填充
	
	CString edu[4]={"餐饮食品","服饰服装","美妆日化","游乐项目"};
	CString level[7]={"A","B","C","D","E","F","G"};
	
	CString u,v,o;
	int i;
	for (i=0;i<flat[p].n;i++)
	{
		//姓名
		m_list.InsertItem(i,user[flat[p].app[i]].name);
	
		
		u.Format(_T("%d"), user[flat[p].app[i]].by);
		v.Format(_T("%d"), user[flat[p].app[i]].bm);
		o = u + '.' + v;
		m_list.SetItemText(i, 1, o);
		
		u.Format(_T("%d"),user[flat[p].app[i]].wy);
		v.Format(_T("%d"),user[flat[p].app[i]].wm);
		o=u+'.'+v;
		m_list.SetItemText(i,2,o);
		
		m_list.SetItemText(i,3,edu[user[flat[p].app[i]].men]);
		
		m_list.SetItemText(i,4,level[user[flat[p].app[i]].lev]);
		
	}



	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}