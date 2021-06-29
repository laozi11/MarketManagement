// Nlist.h: interface for the CNlist class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_NLIST_H__DDEF8818_9AEA_4590_9A82_06E79B7FAF42__INCLUDED_)
#define AFX_NLIST_H__DDEF8818_9AEA_4590_9A82_06E79B7FAF42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CNlist
{
public:
	double score;
	CNlist();
	CNlist & operator = (CNlist &t);
	virtual ~CNlist();
	CString name;
	int sex, tit, by, bm, wy, wm, men, num, lev, money;
	bool visable;
	int apply;
	struct member
	{
		CString name;
		int sex, by, bm;
	};
	member mem[20];

};

#endif // !defined(AFX_NLIST_H__DDEF8818_9AEA_4590_9A82_06E79B7FAF42__INCLUDED_)
