// StudentIDBareBones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	std::string name;
	do
	{
		std::cout << "Enter name: ";
		std::getline(std::cin, name); //necessary because cin will stop at whitespace
		if(name == "exit")
		{
			break;
		}
		std::cout << "Name is: " << name << std::endl;
	}
	while (true);
	return 0;
}
