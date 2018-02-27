#pragma once
#include "stdafx.h"

void pointerDemo()
{
	std::cout << "Pointer Demo" << std::endl;
	int a = 10;
	//declare b as a pointer to an integer
	int *b;
	//store the address of a into b
	b = &a; //note the * is during type declaration, and the & is on the rhs

	//this is the same as 
	//int *b = &a;

	std::cout << a << '\t' << b << std::endl;

	//dereference b and store 20 into it
	*b = 20; //note the * is not during type declaration
	std::cout << "After changing:" << std::endl;
	std::cout << a << '\t' << b << std::endl;

}

void referenceDemo()
{
	std::cout << "Reference Demo" << std::endl;
	int A = 10;
	//int &B; //invalid, b has to be initialised

	//initialise b as just another name for a
	//this cannot be changed, B will forever be another name for A
	int &B = A; //note the & is during type declaration


	std::cout << A << '\t' << B << std::endl;
	B = 20; //note: no need to dereference using *
	std::cout << "After changing:" << std::endl;
	std::cout << A << '\t' << B << std::endl;
}

void referenceDemo2()
{
	std::cout << "Reference Demo 2" << std::endl;
	int A = 10;
	int &B = A; //we know what this is

	//Initialise C as another name for B, which is another name for A
	//Therefore C is another name for A
	int &C = B;

	std::cout << A << '\t' << C << std::endl;
	C = 20;
	std::cout << "After changing:" << std::endl;
	std::cout << A << '\t' << C << std::endl;
}

void arrayPointerDualityDemo()
{
	int a[2];
	int *b = a; //perfectly valid
	b[0] = 100; //valid too
	b[1] = 101; //yeah this too
	//outputs 100101
	std::cout << a[0] << a[1] << std::endl;

}

void bufferOverflowDemo()
{
	int a = 10;
	int b = 20;
	int *aPtr = &a;
	int *bPtr = &b;
	//outputs 1020
	std::cout << a << b << std::endl;
	bPtr[3] = 50;
	//outputs 5020...sometimes (depends on compiler)
	std::cout << a << b << std::endl;

}