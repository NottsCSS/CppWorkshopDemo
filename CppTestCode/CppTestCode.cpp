// CppTestCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
template<typename T>
 void swap(T &a, T&b) noexcept
{
	T temp = a;
	a = b;
	b = temp;
	std::cout << "Own swap called" << std::endl;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::cout << "Hello world" << std::endl;
	return 0;
}

