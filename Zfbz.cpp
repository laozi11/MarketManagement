// Zfbz.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Zfbz.h"

#include "standard.h"

extern Cstandard standard;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZfbz dialog


CZfbz::CZfbz(CWnd* pParent /*=NULL*/)
	: CDialog(CZfbz::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZfbz)
	m_l0 = standard.std[0][0];
	m_a0 = standard.std[0][1];
	m_l1 = standard.std[1][0];
	m_a1 = standard.std[1][1];
	m_l2 = standard.std[2][0];
	m_a2 = standard.std[2][1];
	m_l3 = standard.std[3][0];
	m_a3 = standard.std[3][1];
	//}}AFX_DATA_INIT
}


void CZfbz::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZfbz)
	DDX_CBIndex(pDX, IDC_COMBO1, m_l0);
	DDX_CBIndex(pDX, IDC_COMBO2, m_l1);
	DDX_CBIndex(pDX, IDC_COMBO3, m_l2);
	DDX_CBIndex(pDX, IDC_COMBO4, m_l3);
	DDX_Text(pDX, IDC_EDIT1, m_a0);
	DDX_Text(pDX, IDC_EDIT2, m_a1);
	DDX_Text(pDX, IDC_EDIT3, m_a2);
	DDX_Text(pDX, IDC_EDIT4, m_a3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZfbz, CDialog)
	//{{AFX_MSG_MAP(CZfbz)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZfbz message handlers

BOOL CZfbz::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here

	m_l0=standard.std[0][0];
	m_a0=standard.std[0][1];
	m_l1=standard.std[1][0];
	m_a1=standard.std[1][1];
	m_l2=standard.std[2][0];
	m_a2=standard.std[2][1];
	m_l3=standard.std[3][0];
	m_a3=standard.std[3][1];
	UpdateData(0);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CZfbz::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(1);
	standard.std[0][0]=m_l0;
	standard.std[0][1]=m_a0;
	standard.std[1][0]=m_l1;
	standard.std[1][1]=m_a1;
	standard.std[2][0]=m_l2;
	standard.std[2][1]=m_a2;
	standard.std[3][0]=m_l3;
	standard.std[3][1]=m_a3;
	CDialog::OnOK();
}

void CZfbz::OnCancel() 
{
	// TODO: Add extra cleanup here
	m_l0=standard.std[0][0];
	m_a0=standard.std[0][1];
	m_l1=standard.std[1][0];
	m_a1=standard.std[1][1];
	m_l2=standard.std[2][0];
	m_a2=standard.std[2][1];
	m_l3=standard.std[3][0];
	m_a3=standard.std[3][1];
	UpdateData(0);
	CDialog::OnCancel();
}

