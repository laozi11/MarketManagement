// Zjjl.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Zjjl.h"
#include "Nlist.h"

extern CNlist user[20];
extern int Nt;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZjjl dialog


CZjjl::CZjjl(CWnd* pParent /*=NULL*/)
	: CDialog(CZjjl::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZjjl)
	m_edu = -1;
	m_level = -1;
	m_title = -1;
	m_area = 0;
	m_by = 1990;
	m_bm = 1;	
	m_name = _T("");
	m_num = 0;
	m_wy = 2010;
	m_wm = 1;
	m_sex = 0;
	//}}AFX_DATA_INIT
}


void CZjjl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZjjl)
	DDX_CBIndex(pDX, IDC_COMBO_EDU, m_edu);
	DDX_CBIndex(pDX, IDC_COMBO_LEVEL, m_level);
	DDX_CBIndex(pDX, IDC_COMBO_TITIL, m_title);
	DDX_Text(pDX, IDC_EDIT_AREA, m_area);
	DDX_Text(pDX, IDC_EDIT_BM, m_bm);
	DDV_MinMaxInt(pDX, m_bm, 1, 12);
	DDX_Text(pDX, IDC_EDIT_BY, m_by);
	DDV_MinMaxInt(pDX, m_by, 2021, 2050);
	DDX_Text(pDX, IDC_EDIT_NAME, m_name);
	DDX_Text(pDX, IDC_EDIT_WM, m_wm);
	DDV_MinMaxInt(pDX, m_wm, 1, 12);
	DDX_Text(pDX, IDC_EDIT_NUMBER, m_num);
	DDX_Text(pDX, IDC_EDIT_WY, m_wy);
	DDV_MinMaxInt(pDX, m_wy, 2021, 2050);
	DDX_Radio(pDX, IDC_RADIO_SEX, m_sex);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZjjl, CDialog)
	//{{AFX_MSG_MAP(CZjjl)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZjjl message handlers

void CZjjl::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(1);
	if (m_name==_T("")) 
	{
		AfxMessageBox("«Î ‰»Î–’√˚",MB_OK|MB_ICONWARNING);
		return;
	}

	user[Nt].name=m_name;
	user[Nt].sex=m_sex;
	user[Nt].tit=m_title;
	user[Nt].by=m_by;
	user[Nt].bm=m_bm;
	user[Nt].wy=m_wy;
	user[Nt].wm=m_wm;
	user[Nt].men=m_edu;
	user[Nt].num=m_num;
	user[Nt].lev=m_level;
	user[Nt].money=m_area;
	user[Nt].apply=-1;
	Nt++;

	CDialog::OnOK();
}

BOOL CZjjl::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here

	m_edu = -1;
	m_level = -1;
	m_title = -1;
	m_area = 0;
	m_by = 2021;
	m_bm = 1;	
	m_name = _T("");
	m_num = 0;
	m_wy = 2021;
	m_wm = 1;
	m_sex = 0;
	UpdateData(0);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
