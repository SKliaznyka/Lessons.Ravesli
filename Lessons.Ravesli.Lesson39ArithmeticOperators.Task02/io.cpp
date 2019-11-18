#include "pch.h"
#include <iostream>

int readIntNumber()
{
	std::cout << "Input an Integer number:\t";
	int nUserNumber = { 0 };
	std::cin >> nUserNumber;
	std::cout << std::endl << std::endl;
	return nUserNumber;
}

bool isEven(int nUserNumber)
{
	bool isEvenNumber = { 0 };
	if (nUserNumber % 2 == 0)
	{
		isEvenNumber = true;
	}
	else
	{
		isEvenNumber = false;
	}

	return isEvenNumber;
}

void outputResults(bool isEvenNumber, int nUserNumber)
{
	if (isEvenNumber == true)
	{
		std::cout << "Your input Integer-number:  " << nUserNumber << "  is EVEN." << std::endl;
	}
	else
	{
		std::cout << "Your input Integer-number:  " << nUserNumber << "  is ODD." << std::endl;
	}
}