// BufferOverflowDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void someFunction(int* inputArray, int position, int value)
{
	inputArray[position] = value;
}

int main()
{
	int a = 10;
	int b = 11;
	int c[5] = { 1,2,3,4,5 };
	std::cout << "Before: " << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	someFunction(c, 7, 999); //change 7th element of c into 999
	std::cout << "After: " << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
    return 0;
}

