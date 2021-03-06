// Week2Solutions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void exercise1A()
{
	std::string name;
	std::cout << "Enter name: ";
	std::getline(std::cin, name); //necessary because cin will stop at whitespace
	std::cout << "Name is: " << name << std::endl;
}

enum ErrorCode : int
{
	OK,
	TooShort,
	TooLong
};

ErrorCode exercise1Bfunc(std::string inputString)
{
	if(inputString.length() < 3)
	{
		return TooShort;
	}
	else if(inputString.length() > 25)
	{
		return TooLong;
	}
	else
	{
		return OK;
	}
}

void exercise1C()
{
	std::string name;
	std::cout << "Enter name: ";
	std::getline(std::cin, name); //necessary because cin will stop at whitespace
	const ErrorCode result = exercise1Bfunc(name);
	switch(result)
	{
	case OK:
		std::cout << "Name is: " << name << std::endl;
		break;
	case TooLong:
		std::cout << "Name too long." << std::endl;
		break;
	case TooShort:
		std::cout << "Name too short." << std::endl;
		break;
	}
}

void exercise2()
{
	std::vector<std::string> nameList;
	std::string name;
	do
	{
		std::cout << "Enter name or command: ";
		std::getline(std::cin, name); //necessary because cin will stop at whitespace
		if(name == "print")
		{
			std::cout << "Name list:" << std::endl;
			for(auto &val: nameList)
			{
				std::cout << val << std::endl;
			}
		}
		else if(name == "exit")
		{
			std::cout << "Exit called" << std::endl;
			break;
		}
		else
		{
			const ErrorCode result = exercise1Bfunc(name);
			switch (result)
			{
			case OK:
				std::cout << "Name is: " << name << std::endl;
				nameList.push_back(name);
				break;
			case TooLong:
				std::cout << "Name too long." << std::endl;
				break;
			case TooShort:
				std::cout << "Name too short." << std::endl;
			}
		}
	} while (true);
}

void exercise3aSwap(int &input1, int *input2)
{
	const int temp = input1;
	input1 = *input2;
	*input2 = temp;
}

int exercise3bAdd(int *input1, int *input2)
{
	return *input1 + *input2;
}

int exercise3cAdd(int &input1, int &input2)
{
	return input1 + input2;
}

void exercise3d(int &input)
{
	input += 10;
}

int main()
{
//	exercise1A();
//	exercise1C;
//	exercise2();
	return 0;
}
