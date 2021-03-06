// Week2Demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ExceptionDemo.h"
#include "PointerReferencesDemo.h"

//Namespace demo
namespace namespaceDemo
{
	int var1 = 10;
}

void namespaceDemoFunc()
{
	const int var1 = 11; //no naming conflicts now
	std::cout << "local var1: " << var1 << "\namespace var1: " << namespaceDemo::var1 << std::endl;
}

//Enum demo
enum enumDemo : int
{
	Type1 = 1,
	Type2 = 2,
	Type3 = 3,
	Type4 = 4
};

void enumDemoFunc()
{
	enumDemo type = Type1; //change this to Type2/Type3 or whatever

	switch (type)
	{
	case Type1:
		std::cout << "Type 1" << std::endl;
		break;
	case Type2:
		std::cout << "Type 2" << std::endl;
		break;
	case Type3:
		std::cout << "Type 3" << std::endl;
		break;
	case Type4:
		std::cout << "Type 4" << std::endl;
		break;
	}
}

//Array demo
void arrayDemoFunc()
{
	int a[10];
	std::vector<int> v;

	//Add elements to array
	for (int i = 0; i < 10; i++)
	{
		a[i] = 5 * i;
		v.push_back(50 * i);
	}

	std::cout << std::endl;
	//Prints all values in the static array
	for (auto& val : a)
	{
		std::cout << val << '\t';
	}

	std::cout << std::endl;
	//Prints all values in the dynamic array (vector)
	for (auto& val : v)
	{
		std::cout << val << '\t';
	}
}

//Error code with enum demo
enumDemo funcWithError(int a, int b)
{
	switch (a % b)
	{
	case 0:
		return Type1;
		break;
	case 1:
		return Type2;
		break;
	case 2:
		return Type3;
		break;
	default:
		return Type4;
		break;
	}
}

void errorHandlingDemoFunc()
{
	enumDemo errorType = funcWithError(8, 5);
	switch(errorType)
	{
		case Type1:
			std::cout << "Type 1 error received" << std::endl;
			break;
		case Type2:
			std::cout << "Type 2 error received" << std::endl;
			break;
		case Type3:
			std::cout << "Type 3 error received" << std::endl;
			break;
		case Type4:
			std::cout << "Not Type 1,2,3 error received" << std::endl;
			break;
		
	}
}


int main()
{
	//Uncomment accordingly
	//	enumDemoFunc();
	//	arrayDemoFunc();
	//	namespaceDemoFunc();
	//	errorHandlingDemoFunc();
//		exceptionDemoFunc();
	//	arrayPointerDualityDemo();
	bufferOverflowDemo();
//		pointerDemo();

//	referenceDemo();

	return 0;
}
