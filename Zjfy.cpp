// Zjfy.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Zjfy.h"
#include "Flist.h"

extern int Nf;
extern CFlist flat[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZjfy dialog


CZjfy::CZjfy(CWnd* pParent /*=NULL*/)
	: CDialog(CZjfy::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZjfy)
	m_level = 1;
	m_area = 50000;
	m_num = 50;
	//}}AFX_DATA_INIT
}


void CZjfy::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZjfy)
	DDX_CBIndex(pDX, IDC_COMBO_LEVEL, m_level);
	DDX_Text(pDX, IDC_EDIT_AREA, m_area);
	DDX_Text(pDX, IDC_EDIT_NUMBER, m_num);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZjfy, CDialog)
	//{{AFX_MSG_MAP(CZjfy)
	//}}AFX_MSG_MAP
	//ON_BN_CLICKED(IDOK, &CZjfy::OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZjfy message handlers

void CZjfy::OnOK() 
{
	// TODO: Add extra validation here

	UpdateData(1);
	flat[Nf].lev=m_level;
	flat[Nf].are=m_area;
	flat[Nf].sp=m_num;
	Nf++;

	CDialog::OnOK();
}

BOOL CZjfy::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_level = 0;
	m_area = 50;
	m_num = 50;
	UpdateData(0);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
