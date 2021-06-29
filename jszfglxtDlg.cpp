// jszfglxtDlg.cpp : implementation file
//

#include "stdafx.h"
#include "jszfglxt.h"
#include "jszfglxtDlg.h"
#include "Nlist.h"
#include "Flist.h"


extern int Nt,Nf;
extern CNlist user[20];
extern CFlist flat[20];

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CDialog m_aboutt;
	CDialog m_about;
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJszfglxtDlg dialog

CJszfglxtDlg::CJszfglxtDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJszfglxtDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJszfglxtDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJszfglxtDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJszfglxtDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJszfglxtDlg, CDialog)
	//{{AFX_MSG_MAP(CJszfglxtDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_JSMD, OnJsmd)
	ON_BN_CLICKED(IDC_ZFBZ, OnZfbz)
	ON_BN_CLICKED(IDC_FYXX, OnFyxx)
	ON_BN_CLICKED(IDC_SQXX, OnSqxx)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJszfglxtDlg message handlers

BOOL CJszfglxtDlg::OnInitDialog()
{
	m_dl.DoModal();
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	int i, j;
	CFile name;
	if (name.Open("name.dat",CFile::modeRead))
	{
		
		CArchive na(&name,CArchive::load);
		na>>Nt;
		for (i=0;i<Nt;i++)
		{
			na>>user[i].name>>user[i].sex>>user[i].tit>>user[i].by>>user[i].bm>>user[i].wy
			>>user[i].wm>>user[i].men>>user[i].num>>user[i].lev>>user[i].money>>user[i].apply;
			for (j=0;j<user[i].num;j++)
				na>>user[i].mem[j].name>>user[i].mem[j].sex>>user[i].mem[j].by>>user[i].mem[j].bm;
		}
		na.Close();
		name.Close();
	}
	
	CFile flats;
	if (flats.Open("flat.dat",CFile::modeRead))
	{
		
		CArchive fl(&flats,CArchive::load);
		fl>>Nf;
		for (i=0;i<Nf;i++)
		{
			fl>>flat[i].lev>>flat[i].are>>flat[i].sp>>flat[i].n;
			for (j=0;j<flat[i].n;j++)
				fl>>flat[i].app[j];
		}

	}
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJszfglxtDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJszfglxtDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJszfglxtDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CJszfglxtDlg::OnCancel() 
{
	int i, j;
	// TODO: Add extra cleanup here
	if (IDYES==AfxMessageBox("确定要退出系统?",MB_YESNO|MB_ICONQUESTION))
	{
		
		CFile name("name.dat",CFile::modeCreate|CFile::modeWrite);
		CArchive na(&name,CArchive::store);
		na<<Nt;
		for (i=0;i<Nt;i++)
		{
			na<<user[i].name<<user[i].sex<<user[i].tit<<user[i].by<<user[i].bm<<user[i].wy
			<<user[i].wm<<user[i].men<<user[i].num<<user[i].lev<<user[i].money<<user[i].apply;
			for (j=0;j<user[i].num;j++)
				na<<user[i].mem[j].name<<user[i].mem[j].sex<<user[i].mem[j].by<<user[i].mem[j].bm;
			
		}
		na.Close();
		name.Close();

		
		CFile flats("flat.dat",CFile::modeCreate|CFile::modeWrite);
		CArchive fl(&flats,CArchive::store);
		fl<<Nf;
		for (i=0;i<Nf;i++)
		{
			fl<<flat[i].lev<<flat[i].are<<flat[i].sp<<flat[i].n;
			for (j=0;j<flat[i].n;j++)
				fl<<flat[i].app[j];			
		}
		fl.Close();
		flats.Close();

		CDialog::OnCancel();
	}
}

void CJszfglxtDlg::OnJsmd() 
{
	// TODO: Add your control notification handler code here
	jsmd.DoModal();
}

void CJszfglxtDlg::OnZfbz() 
{
	// TODO: Add your control notification handler code here
	zfbz.DoModal();
}

void CJszfglxtDlg::OnFyxx() 
{
	// TODO: Add your control notification handler code here
	xfyxx.DoModal();
}

void CJszfglxtDlg::OnSqxx() 
{
	// TODO: Add your control notification handler code here
	sqxx.DoModal();
	
}
