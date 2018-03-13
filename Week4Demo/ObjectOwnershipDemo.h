#pragma once
#include "stdafx.h"

inline void doSomething(int intArray[]) //this function does not own intArray
{
	intArray[0] = 10;
	intArray[1] = 100;
}

inline int* generateArray(int k)
{
	int *intArray = new int[k];
	return intArray;
}

inline void ownershipDemo1()
{
	int k;
	std::cout << "Enter size of array: ";
	std::cin >> k;
	int *dynArray = generateArray(k); //now this function owns dynArray
	doSomething(dynArray); //we passed dynArray into doSomething but doSomething does not own it in this case




}