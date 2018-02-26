#include "stdafx.h"
#include "ExceptionDemo.h"

void funcWithThrow()
{
	std::cout << "Line 1 is called" << std::endl;
	throw std::exception("Oh no! An Error occured!");
	std::cout << "Line 2 is called" << std::endl;
}

void func2()
{
	std::cout << "Func2 line 1 is called" << std::endl;
	funcWithThrow();
	std::cout << "Func2 line 2 is called" << std::endl;
}

void exceptionDemoFunc()
{
	try
	{
//		funcWithThrow();
		func2();
	}
	catch(std::exception e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}