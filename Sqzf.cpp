// Sqzf.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Sqzf.h"
#include "Nlist.h"
#include "standard.h"
#include "Flist.h"
#include "Xfyxx.h"

extern CFlist flat[20];
extern Cstandard standard;
extern CNlist user[20];
extern int Nt;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSqzf dialog


CSqzf::CSqzf(CWnd* pParent /*=NULL*/)
	: CDialog(CSqzf::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSqzf)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSqzf::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSqzf)
	DDX_Control(pDX, IDC_LIST1, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSqzf, CDialog)
	//{{AFX_MSG_MAP(CSqzf)
	ON_BN_CLICKED(IDC_BUTTON_SQZF, OnButtonSqzf)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSqzf message handlers

BOOL CSqzf::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_list.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_list.InsertColumn(0,"姓名",LVCFMT_CENTER,120);
	m_list.InsertColumn(1,"性别",LVCFMT_CENTER,60);
	m_list.InsertColumn(2,"来访事务",LVCFMT_CENTER,120);
	m_list.InsertColumn(3,"起租日期",LVCFMT_CENTER, 120);
	m_list.InsertColumn(4,"停租日期",LVCFMT_CENTER, 120);
	m_list.InsertColumn(5,"经营门类",LVCFMT_CENTER, 120);
	m_list.InsertColumn(6,"负责人数",LVCFMT_CENTER, 120);
	m_list.InsertColumn(7,"店铺类型",LVCFMT_CENTER, 120);
	m_list.InsertColumn(8,"租金",LVCFMT_CENTER,100);
	
	
	for (int i=0;i<Nt;i++) InsertN(i,i);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CSqzf::InsertN(int n,int l)
{
	CString p,q,o;
	
	//姓名
	m_list.InsertItem(l,user[n].name);

	//性别
	switch (user[n].sex)
	{	
		case 0: m_list.SetItemText(l,1,"男");break;
		case 1: m_list.SetItemText(l,1,"女");break;
	}


	switch (user[n].tit)
	{	
		case 0: m_list.SetItemText(l,2,"商铺租赁");		break;
		case 1: m_list.SetItemText(l,2,"业务咨询");	break;
		case 2: m_list.SetItemText(l,2,"业主申诉");		break;
		case 3: m_list.SetItemText(l,2,"其他");		break;
	}
	
	p.Format(_T("%d"),user[n].by);
	q.Format(_T("%d"),user[n].bm);
	o=p+'.'+q;
	m_list.SetItemText(l,3,o);

	
	p.Format(_T("%d"),user[n].wy);
	q.Format(_T("%d"),user[n].wm);
	o=p+'.'+q;
	m_list.SetItemText(l,4,o);

	
	switch (user[n].men)
	{	
		case 0: m_list.SetItemText(l,5,"餐饮食品");break;
		case 1: m_list.SetItemText(l,5,"服饰服装");break;
		case 2: m_list.SetItemText(l,5,"美妆日化");break;
		case 3: m_list.SetItemText(l,5,"游乐项目");break;
	}

	
	o.Format(_T("%d"),user[n].num);
	m_list.SetItemText(l,6,o);

	
	switch (user[n].lev)
	{	
		case 0: m_list.SetItemText(l,7,"A");	break;
		case 1: m_list.SetItemText(l,7,"B");		break;
		case 2: m_list.SetItemText(l,7,"C");	break;
		case 3: m_list.SetItemText(l,7,"D");		break;
		case 4: m_list.SetItemText(l,7,"E");	break;
		case 5: m_list.SetItemText(l,7,"F");		break;
		case 6: m_list.SetItemText(l,7,"G");	break;
	}

	
	o.Format(_T("%d"),user[n].money);
	m_list.SetItemText(l,8,o);
	//UpdateData(false);

}

void CSqzf::OnButtonSqzf() 
{
	// TODO: Add your control notification handler code here
	int row = m_list.GetSelectionMark();
	if (row==-1)
	{
		AfxMessageBox("没有选择记录!",MB_OK|MB_ICONWARNING);
		return;
	}
	if (user[row].lev != flat[p].lev) {
		AfxMessageBox("申请意向和选择类型不相符!", MB_OK | MB_ICONWARNING);
		return;
	}
	if (user[row].money < flat[p].are) {
		AfxMessageBox("申请人预算不足!", MB_OK | MB_ICONWARNING);
		return;
	}
	
	AfxMessageBox("申请成功!",MB_OK|MB_ICONWARNING);
	flat[p].app[flat[p].n]=row;
	user[row].apply=p;
	flat[p].n++;
	
	success = true;

}
