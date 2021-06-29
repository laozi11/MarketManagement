// Member.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Member.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMember dialog


CMember::CMember(CWnd* pParent /*=NULL*/)
	: CDialog(CMember::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMember)
	m_m = 1;
	m_y = 2000;
	m_n = _T("");
	m_s = 0;
	//}}AFX_DATA_INIT
}


void CMember::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMember)
	DDX_Text(pDX, IDC_EDIT_MONTH, m_m);
	DDV_MinMaxInt(pDX, m_m, 1, 12);
	DDX_Text(pDX, IDC_EDIT_YEAR, m_y);
	DDV_MinMaxInt(pDX, m_y, 1900, 2010);
	DDX_Text(pDX, IDC_EDIT_NAME, m_n);
	DDV_MaxChars(pDX, m_n, 8);
	DDX_Radio(pDX, IDC_RADIO_SEX, m_s);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMember, CDialog)
	//{{AFX_MSG_MAP(CMember)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMember message handlers

void CMember::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(1);
	CDialog::OnOK();
}
