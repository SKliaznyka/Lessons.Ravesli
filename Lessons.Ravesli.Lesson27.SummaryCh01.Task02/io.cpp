#include "pch.h"
#include <iostream>

int readNumber()
{
	int Number(0);

	std::cout << "Input Number:\t";
	std::cin >> Number;

	return Number;
}

void writeAnswer(int SumNumbers)
{
	std::cout << "Summ of the input numbers:\t" << SumNumbers << std::endl << std::endl;
	std::cout << "---------------------------------" << std::endl;
}