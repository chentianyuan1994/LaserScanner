// LaserScanner.cpp: implementation of the LaserScanner class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "demonrecvdata.h"
#include "LaserScanner.h"
#include "global_api.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

LaserScanner::LaserScanner()
{

}

LaserScanner::~LaserScanner()
{

}
//判断能否左转和右转，0调用左转，1为右转
bool LaserScanner::ObstacleDetection(int dir)
{
	int i = 0;
	int j = 0;
	bool flag = true;
	j = dir;
	switch(j)
	{
	case 0:
		for(i = 180; i < 360; i++)
		{
			if(gPolarDistance[i] < 150 && gPolarDistance[i] > 5)
			{
				flag = false;
			}
		}
		break;
	case 1:
		for(i = 0; i < 180; i++)
		{
			if(gPolarDistance[i] < 150 && gPolarDistance[i] > 5)
			{
				flag = false;
			}
		}
		break;
	}
	return flag;
}
