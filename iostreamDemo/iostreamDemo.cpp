// iostreamDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{

	//Simple Example
//	int num;
//	std::cout << "Enter a number: " << std::endl; //outputs to console
//	std::cin >> num; //gets number from console
//	std::cout << num;

	//2 Numbers example, uncomment to use
	/*
	int num1, num2;
	std::cout << "Enter 2 numbers: " << std::endl;
	std::cin >> num1 >> num2z;
	std::cout << "First number is: " << num1 << std::endl;
	std::cout << "Second number is: " << num2 << std::endl;
	*/

	//get line example, uncomment to use
//	std::string inputString;
	int _1stval = 10;
	std::cout << _1stval << std::endl;
//	std::cout << "Enter name: ";
////	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //necessary if using cin together with getline, otherwise getline will break
//	std::getline(std::cin, inputString);
//	std::cout << "\nYour name is: " << inputString << std::endl;

    return 0; //remember to add breakpoint otherwise console will close before you see results
}

