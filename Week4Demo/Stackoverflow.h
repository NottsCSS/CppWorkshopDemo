#pragma once
#include "stdafx.h"

inline void stackOverflow()
{
	int j = 100;
	const int k = 100000;

	//Stack array declaration
	long list1[k] = {}; //will stack overflow at k = 1000000
	for(size_t i = 0;i<k;i++)
	{
		list1[i] = k + j; //arbitrary numbers being put in
		j++;
	}

	//Heap array declaration
	long* list2 = new long[k]; //will not stack overflow...ever
	for (size_t i = 0; i<k; i++)
	{
		list2[i] = k + j; //arbitrary numbers being put in
		j++;
	}
	delete[] list2; //deletes the array (otherwise will lead to memory leak)
}

inline int* newExample()
{
//	int k = 10; //k is destructed after newExample() exits
//	int *j = &k; //this will work, sometimes, but not everytime

	int *j = new int;
	*j = 10;
	return j; //return the address of an integer on the heap
}