// Xgjl.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Xgjl.h"
#include "Nlist.h"

extern CNlist user[];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXgjl dialog


CXgjl::CXgjl(CWnd* pParent /*=NULL*/)
	: CDialog(CXgjl::IDD, pParent)
{
	//{{AFX_DATA_INIT(CXgjl)
	m_edu = -1;
	m_level = -1;
	m_money = 0;
	m_bm = 0;
	m_by = 0;
	m_name = _T("");
	m_wm = 0;
	m_wy = 0;
	m_sex = -1;
	m_title = -1;
	m_num = 0;
	//}}AFX_DATA_INIT
}


void CXgjl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CXgjl)
	DDX_CBIndex(pDX, IDC_COMBO_EDU, m_edu);
	DDX_CBIndex(pDX, IDC_COMBO_LEVEL, m_level);
	DDX_Text(pDX, IDC_EDIT_AREA, m_money);
	DDX_Text(pDX, IDC_EDIT_BM, m_bm);
	DDV_MinMaxInt(pDX, m_bm, 1, 12);
	DDX_Text(pDX, IDC_EDIT_BY, m_by);
	DDV_MinMaxInt(pDX, m_by, 2021, 2050);
	DDX_Text(pDX, IDC_EDIT_NAME, m_name);
	DDV_MaxChars(pDX, m_name, 8);
	DDX_Text(pDX, IDC_EDIT_WM, m_wm);
	DDV_MinMaxInt(pDX, m_wm, 1, 12);
	DDX_Text(pDX, IDC_EDIT_WY, m_wy);
	DDV_MinMaxInt(pDX, m_wy, 2021, 2050);
	DDX_Radio(pDX, IDC_RADIO_SEX, m_sex);
	DDX_CBIndex(pDX, IDC_COMBO_TITIL, m_title);
	DDX_Text(pDX, IDC_EDIT_NUMBER, m_num);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CXgjl, CDialog)
	//{{AFX_MSG_MAP(CXgjl)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXgjl message handlers

void CXgjl::setP(int v)
{
	p=v;
}

BOOL CXgjl::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_name=user[p].name;
	m_sex=user[p].sex;
	m_title=user[p].tit;
	m_by=user[p].by;
	m_bm=user[p].bm;
	m_wy=user[p].wy;
	m_wm=user[p].wm;
	m_edu=user[p].men;
	m_num=user[p].num;
	m_level=user[p].lev;
	m_money=user[p].money;
	UpdateData(0);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CXgjl::OnOK() 
{
		
	UpdateData(1);
	if (m_name==_T("")) 
	{
		AfxMessageBox("«Î ‰»Î–’√˚",MB_OK|MB_ICONWARNING);
		return;
	}

	user[p].name=m_name;
	user[p].sex=m_sex;
	user[p].tit=m_title;
	user[p].by=m_by;
	user[p].bm=m_bm;
	user[p].wy=m_wy;
	user[p].wm=m_wm;
	user[p].men=m_edu;
	user[p].num=m_num;
	user[p].lev=m_level;
	user[p].money=m_money;
	for (int i=0;i<m_num;)
		if(jtcy.DoModal()==IDOK)
		{
			user[p].mem[i].name=jtcy.m_n;
			user[p].mem[i].sex=jtcy.m_s;
			user[p].mem[i].by=jtcy.m_y;
			user[p].mem[i].bm=jtcy.m_m;
			i++;
		}

	CDialog::OnOK();
}
