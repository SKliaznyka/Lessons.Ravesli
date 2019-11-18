// Lessons.Ravesli.Lesson39ArithmeticOperators.Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Lesson 39. Task 02
//Write the program which ask user to enter a Integer-number
//Program would output: determination of ODD or EVEN
//Write Function: isEven(), which output "true" in case of Even. "false" - in case of Odd.
//
//Hint: use IF. use ==. use %
//


#include "pch.h"
#include <iostream>
#include "io.h"

int main()
{
	std::cout << "Ravesli. Chapter 39 (Arithmetic operations)" << std::endl;
	std::cout << "Task 02:" << std::endl << std::endl;

	int nUserNumber = { 0 };
	nUserNumber = readIntNumber();

	bool isEvenNumber = { 0 };
	isEvenNumber = isEven(nUserNumber);

	outputResults(isEvenNumber, nUserNumber);
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
