// Nlist.cpp: implementation of the CNlist class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "jszfglxt.h"
#include "Nlist.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CNlist::CNlist()
{
	visable=1;
}

CNlist & CNlist::operator = (CNlist &t)
{
	name=t.name;
	sex=t.sex;
	tit=t.tit;
	by=t.by;
	bm=t.bm;
	wy=t.wy;
	wm=t.wm;
	men=t.men;
	num=t.num;
	lev=t.lev;
	money=t.money;
	for (int i=0;i<num;i++)
	{
		mem[i].name=t.mem[i].name;
		mem[i].sex=t.mem[i].sex;
		mem[i].by=t.mem[i].by;
		mem[i].bm=t.mem[i].bm;
	}
	return * this;
}

CNlist::~CNlist()
{

}
