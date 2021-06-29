// Sx.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Sx.h"
#include "Nlist.h"

extern int Nt;
extern CNlist user[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSx dialog


CSx::CSx(CWnd* pParent /*=NULL*/)
	: CDialog(CSx::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSx)
	//m_age = FALSE;
	m_edu = FALSE;
	m_level = FALSE;
	m_name = FALSE;
	m_sex = FALSE;
	m_title = FALSE;
	m_work = FALSE;
	m_educ = 0;
	m_levelc = 0;
	m_titlec = 0;
	m_namee = _T("");
	m_sexr = 0;
	
	//m_ager = 0;
	m_wager = 0;
	//m_agee = 0;
	m_worke = 0;
	
}


void CSx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSx)
	//DDX_Check(pDX, IDC_CHECK_AGE, m_age);
	DDX_Check(pDX, IDC_CHECK_EDU, m_edu);
	DDX_Check(pDX, IDC_CHECK_LEVEL, m_level);
	DDX_Check(pDX, IDC_CHECK_NAME, m_name);
	DDX_Check(pDX, IDC_CHECK_SEX, m_sex);
	DDX_Check(pDX, IDC_CHECK_TITLE, m_title);
	
	DDX_CBIndex(pDX, IDC_COMBO_EDU, m_educ);
	DDX_CBIndex(pDX, IDC_COMBO_LEVEL, m_levelc);
	DDX_CBIndex(pDX, IDC_COMBO_TITIL, m_titlec);
	DDX_Text(pDX, IDC_EDIT_NAME, m_namee);
	DDX_Radio(pDX, IDC_RADIO_SEX, m_sexr);
	
	//DDX_Radio(pDX, IDC_RADIO_AGE, m_ager);
	
	//DDX_Text(pDX, IDC_EDIT_AGE, m_agee);
	
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSx, CDialog)
	//{{AFX_MSG_MAP(CSx)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSx message handlers

BOOL CSx::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	for (int i=0;i<Nt;i++) user[i].visable=TRUE;
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CSx::OnOK() 
{
	// TODO: Add extra validation here
	int i;
	UpdateData(TRUE);
	CString t;
	for (i=0;i<Nt;i++)
	{
		if (m_name==1)
			if (user[i].name!=m_namee) user[i].visable=0;
		if (m_sex==1)
			if (user[i].sex!=m_sexr) user[i].visable=0;
		if (m_title==1)
			if (user[i].tit != m_titlec) user[i].visable = 0;
			
		if (m_edu==1)
			if (user[i].men != m_educ) user[i].visable = 0;
			
		if (m_level==1)
			if (user[i].lev != m_levelc) user[i].visable = 0;
			
		/*if (m_age==1)
			switch (m_ager)
		{	case 0: if ((2010-user[i].by)<m_agee) user[i].visable=0;	break;
			case 1: if ((2010-user[i].by)>m_agee) user[i].visable=0;	break;
			case 2: if ((2010-user[i].by)!=m_agee) user[i].visable=0;	break;
		}		*/
		

	}

	CDialog::OnOK();
}