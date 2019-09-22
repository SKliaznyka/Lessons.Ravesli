// Lessons.Ravesli.Lesson113.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Ravesli Lesson 113. Task


#include "pch.h"
#include <iostream>

class Numbers
{
public:
	int m_num1;
	int m_num2;

	void set(int num1, int num2)
	{
		m_num1 = num1;
		m_num2 = num2;
	}

	void print()
	{
		std::cout << "number1 = " << m_num1 << "\t" <<
			"number2 = " << m_num2 << std::endl;
	}
};

int main()
{
	Numbers num1;
	num1.set(8, 10);

	Numbers num2{ 4, 4 };

	num1.print();
	num2.print();
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
