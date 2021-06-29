// Xgxx.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "Xgxx.h"
#include "Flist.h"

extern CFlist flat[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXgxx dialog


CXgxx::CXgxx(CWnd* pParent /*=NULL*/)
	: CDialog(CXgxx::IDD, pParent)
{
	//{{AFX_DATA_INIT(CXgxx)
	m_level = -1;
	m_area = 0;
	m_num = 0;
	//}}AFX_DATA_INIT
}


void CXgxx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CXgxx)
	DDX_CBIndex(pDX, IDC_COMBO_LEVEL, m_level);
	DDX_Text(pDX, IDC_EDIT_AREA, m_area);
	DDX_Text(pDX, IDC_EDIT_NUMBER, m_num);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CXgxx, CDialog)
	//{{AFX_MSG_MAP(CXgxx)
	//}}AFX_MSG_MAP
	/*ON_BN_CLICKED(IDOK, &CXgxx::OnBnClickedOk)*/
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXgxx message handlers

BOOL CXgxx::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_level = flat[p].lev;
	m_area = flat[p].are;
	m_num = flat[p].sp;
	UpdateData(0);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CXgxx::OnOK() 
{
	// TODO: Add extra validation here

	UpdateData(1);
	flat[p].lev = m_level;
	flat[p].are = m_area;
	flat[p].sp = m_num;
	
	CDialog::OnOK();
}


