// FunctionsDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int sum(int a, int b)
{
	return a + b;
}
//GCD = Greatest Common Divisor
int GCD(int a, int b) //reuse of a and b allowed (compared to line 6), since they are not visible to each other
{
	//using Euclid's algorithm, involves recursion
	if(b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a%b);
	}
}

// Bonus
/*void funcWithThrow(int a)
{
	// Cannot declare function within function, even for functions without parameters
	// Uncomment comment block below to verify
	/*
	void function2()
	{
		std::cout << "Test" << std::endl;
	}#1#

	// Lambda function examples(not taught, only as bonus)
	// Typical syntax: auto fnPtr = [<captures>](<parameters>){<function body>};
	// <captures> means whatever that is available at the scope the lambda is declared in
	// refer to function3 below using variable a from local scope
	// <parameters> means parameters that the function needs to take
	// refer to function4 below
	/* 
	auto function2 = []() {std::cout << "Test" << std::endl; };
//	function2();
	auto function3 = [a]() {std::cout << "a is: " << a << std::endl; };
//	function3();
	auto function4 = [](int k) {std::cout << "k is: " << k << std::endl; };
//	function4(a);
	#1#
}*/


int main()
{
	std::cout << sum(10, GCD(8,12)) << std::endl; // sum of 10 and 4, which is 14, GCD(8,12) = 4
    return 0;
}

