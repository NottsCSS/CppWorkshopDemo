// ConditionalDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a = 10;
	if (a < 11)
	{
		std::cout << "a is less than 11" << std::endl;
	}
	else if( a < 10)
	{
		std::cout << "a is less than 10" << std::endl;
	}
	else
	{
		std::cout << "a is more than or equals to 10" << std::endl;
	}

	int b = 3;
	switch(b)
	{
	case 0 :
		std::cout << "b is 0..." << std::endl;
		break;
	case 1:
		std::cout << "case 1" << std::endl;
		break;
	case 2:
		std::cout << "CASE 2" << std::endl;
		break;
	case 3: 
		std::cout << "b is 3" << std::endl;
		break;
	default: 
		std::cout << "b is none of the above" << std::endl;
		break;
	}



    return 0;
}

