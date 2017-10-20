// LaserScanner.h: interface for the LaserScanner class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LASERSCANNER_H__7C8B7032_A92B_4CEF_82AE_5884666EB880__INCLUDED_)
#define AFX_LASERSCANNER_H__7C8B7032_A92B_4CEF_82AE_5884666EB880__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class LaserScanner  
{
public:
	bool ObstacleDetection(int dir);
	bool FlagLeft;
	bool FlagRight;
	bool FlagFront;
	LaserScanner();
	virtual ~LaserScanner();

};

#endif // !defined(AFX_LASERSCANNER_H__7C8B7032_A92B_4CEF_82AE_5884666EB880__INCLUDED_)
