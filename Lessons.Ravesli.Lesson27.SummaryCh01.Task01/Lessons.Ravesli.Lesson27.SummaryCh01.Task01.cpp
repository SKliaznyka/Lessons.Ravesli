// Lessons.Ravesli.Lesson27.SummaryCh01.Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//CHAPTER 01. 
//SUMMARY TEST
//Task 01. 
//Code 1-file programm.
//User input two Integers. Program should prompt it
//Programm should add given Integers.
//Program should output result.
//Program should contain 3 functions:
// readNumber - asks for the INTEGER and RETURN it into MAIN
// writeAnswer - function show the RESULT (no RETURN available)
// main - connect everything.
//

#include "pch.h"
#include <iostream>

//Init FUNCTION:
int readNumber();
void writeAnswer(int SumNumbers);

//MAIN part:
int main()
{
	//int Num1(0),
	//	Num2(0);
	//
	//Num1 = readNumber();
	//Num2 = readNumber();

	int SumNumbers(0);

	SumNumbers = readNumber() + readNumber();

	writeAnswer(SumNumbers);
	return 0; 
}

//FUNCTION body:
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
