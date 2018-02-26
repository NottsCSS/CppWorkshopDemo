// UnionErrorHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


std::optional<std::string> func1(int a)
{
	if(a>10)
	{
		return std::nullopt;
	}
	else
	{
		return "Something useful";
	}
}

int main()
{
	auto result = func1(9);
	std::cout << result.value_or("Nothing returned") << std::endl;
    return 0;
}

