// Lessons.Ravesli.Lesson37.SummaryCh02.Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//CHAPTER 02.
//SUMMARY TEST.
//TASK 03.
//
//Code 1-file program.
//Prompt User to enter two numbers - use double
//Prompt user to enter +, or -, or *, or /.
//Do math calculations.
//Show the result on screen.
//If entered math operation do not match the symbols - show error on entering.
//

#include "pch.h"
#include <iostream>
#include "io.h"

int main()
{
	std::cout << "Ravesli. Chapter 02 Summary Test" << std::endl;
	std::cout << "Task 03" << std::endl << std::endl;

	double dNum1{ 0.0 }, dNum2{ 0.0 }, dCalcResult{ 0.0 };
	dNum1 = readNumber();
	dNum2 = readNumber();

	dCalcResult = mathCalculation(dNum1, dNum2, readOperation());
	
	std::cout << "Calc Result:\t" << dCalcResult << std::endl << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
	return 0; 
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
