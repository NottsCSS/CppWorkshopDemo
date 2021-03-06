// Week2Questions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void switchCaseQuestion()
{
	const int a = 0;
	switch (a)
	{
	case 0:
		std::cout << "0";
	case 1:
		std::cout << "1";
	case 2:
		std::cout << "2";
		break;
	default:
		std::cout << "Default";
		break;
	}
}

void ifElseQuestion()
{
	int a = 3;
	if (a < 5)
	{
		std::cout << a;
		a++;
	}
	else if (a < 4)
	{
		std::cout << a;
		a++;
	}
	else
	{
		std::cout << a;
		a++;
	}
}

void doWhileQuestion()
{
	int a = 0;
	do
	{
		std::cout << a++;
	}
	while (a < 9);
	std::cout << a;
}

bool isFactor(int a, int b)
{
	//positive is true, 0 is false
	return a % b; 
}

void forLoopQuestion()
{
	const int k = 5;
	int j = 6;
	for(; isFactor(j,k); j++)
	{
		std::cout << j;
	}
}


int main()
{
	forLoopQuestion();
//	switchCaseQuestion();
//	ifElseQuestion();
//	doWhileQuestion();
	return 0;


}
