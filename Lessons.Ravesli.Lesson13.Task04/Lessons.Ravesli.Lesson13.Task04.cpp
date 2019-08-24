// Lessons.Ravesli.Lesson13.Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Task 13.4
//Write the function "doubleNumber()" which receive INT param.
//This INT-param need to multiply by 2. 
//Return the result into the Caller.


#include "pch.h"
#include <iostream>

//FUNCTION Init:

int doubleNumber(int Number);
void outputResult(int Number);


//MAIN part:
int main()
{
	std::cout << "Ravesli. Lesson 13. Task 13.4. Function multiple" << std::endl;
	
	int iNumber(0);
	std::cout << "Input an INT-Number:\t";
	std::cin >> iNumber;
	
	//outputResult(doubleNumber(iNumber));
	outputResult(iNumber);

	return 0;
}

//FUNCTION body:

int doubleNumber(int Number)
{
	return Number * 2;
}

void outputResult(int Number)
{
	std::cout << "Entered Number *2 = \t" << doubleNumber(Number) << std::endl;
	std::cout << "----------------------------------------------" << std::endl << std::endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
