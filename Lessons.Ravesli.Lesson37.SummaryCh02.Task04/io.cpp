#include "pch.h"
#include <iostream>
#include "io.h"
#include "myConstants.h"

double readNumber()
{
	std::cout << "Enter Height:\t";
	double dHeight{ 0.0 };
	std::cin >> dHeight;
	std::cout << std::endl;

	return dHeight;
}

void calcHeight(double dHeight)
{
	double dCalcHeight{ 0.0 };
	int iTime = { 0 };
	dCalcHeight = dHeight;
	dCalcHeight = dCalcHeight - myconstants::gravity * iTime*iTime;
	if (dCalcHeight < 0.0)
	{
		dCalcHeight = 0.0;
	}
	std::cout << "At " << iTime << " seconds, ball is at height:\t" << dCalcHeight << std::endl;
	++iTime;
	//========

	dCalcHeight = dCalcHeight - myconstants::gravity * iTime*iTime;
	if (dCalcHeight < 0.0)
	{
		dCalcHeight = 0.0;
	}
	std::cout << "At " << iTime << " seconds, ball is at height:\t" << dCalcHeight << std::endl;
	++iTime; 
	//=========

	dCalcHeight = dCalcHeight - myconstants::gravity * iTime*iTime;
	if (dCalcHeight < 0.0)
	{
		dCalcHeight = 0.0;
	}
	std::cout << "At " << iTime << " seconds, ball is at height:\t" << dCalcHeight << std::endl;
	++iTime;
	//========

	dCalcHeight = dCalcHeight - myconstants::gravity * iTime*iTime;
	if (dCalcHeight < 0.0)
	{
		dCalcHeight = 0.0;
	}
	std::cout << "At " << iTime << " seconds, ball is at height:\t" << dCalcHeight << std::endl;
	++iTime;
	//========

	dCalcHeight = dCalcHeight - myconstants::gravity * iTime*iTime;
	if (dCalcHeight < 0.0)
	{
		dCalcHeight = 0.0;
	}
	std::cout << "At " << iTime << " seconds, ball is at height:\t" << dCalcHeight << std::endl;
	std::cout << std::endl << std::endl;
}