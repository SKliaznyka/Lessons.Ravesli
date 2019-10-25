// Lessons.Ravesli.Lesson37.SummaryCh02.Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//CHAPTER 02.
//SUMMARY TEST.
//TASK 04.
//
//Code 4-file program. [io.h, constants.h, io.cpp, main.cpp]
//Falling ball
//Prompt User to enter Start height (meters) - use double.
//Show where is the ball in 0,1,2,3,4,5 seconds falling process.
//we use H = gt2/2 formula.    g = 9.8 m/sec2
//Show the result on screen.
//If entered math operation do not match the symbols - show error on entering.
//

#include "pch.h"
#include <iostream>
#include "io.h"
#include "myConstants.h"

int main()
{
	std::cout << "Ravesli. Chapter 02 Summary Test" << std::endl;
	std::cout << "Task 04" << std::endl << std::endl;

	double dHeight{ 0.0 };
	dHeight = readNumber();
	calcHeight(dHeight);

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
