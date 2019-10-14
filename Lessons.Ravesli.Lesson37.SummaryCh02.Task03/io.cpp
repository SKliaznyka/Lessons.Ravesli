#include "pch.h"
#include <iostream>
#include "io.h"

//Function body:

double readNumber()
{
	std::cout << "Enter double value:\t";
	double dValue{ 0.0 };
	std::cin >> dValue;
	std::cout << std::endl;

	return dValue;
}

char readOperation()
{
	std::cout << "Enter math-operation symbol:\t";
	char cOperation{ 0 };
	std::cin >> cOperation;
	std::cout << std::endl;

	return cOperation;
}

double mathCalculation(double Num1, double Num2, char Operator)
{	
	if (Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
	{
		std::cout << "ERROR! Wrong operator input" << std::endl << std::endl;
	}
	if (Operator == '+')
	{
		return Num1 + Num2;
	}
	else if (Operator == '-')
	{
		return Num1 - Num2;
	}
	else if (Operator == '*')
	{
		return Num1 * Num2;
	}
	else if (Operator == '/')
	{
		if (Num2 != 0)
		{
			return Num1 / Num2;
		}
		else
		{
			std::cout << "ERROR!  Delimiter = 0. Infinity" << std::endl << std::endl;
		}
	}
}