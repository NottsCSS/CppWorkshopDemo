#pragma once
#include "stdafx.h"


inline int function1Demo(char a)
{
	std::cout << "function 1" << a << std::endl;
	return 5;
}
inline int function2Demo(char c)
{
	std::cout << "function 2" << c << std::endl;
	return 10;
}

inline void voidFunction1()
{
	std::cout << "Void function1" << std::endl;
}

inline void voidFunction2()
{
	std::cout << "Void function2" << std::endl;
}

using FnPtr = int(*)(char);
using voidFnPtr = void(*)();
using voidFnPtrPtr = void(**)();

inline void usingDemo()
{
	std::vector<FnPtr> fnPtrList = {function1Demo, function2Demo};
	for(auto &fnPtr: fnPtrList)
	{
		std::cout << "Function returns: " << fnPtr('k') << std::endl;
	}

	std::vector<voidFnPtr> fnPtrList2 = {voidFunction1, voidFunction2 };
	std::cout << "Now calling void functions: " << std::endl;
	for (auto &fnPtr : fnPtrList2)
	{
		fnPtr();
	}
	
}

typedef int (*FnPtr2)(char);
typedef void (*voidFnPtr2)();

inline void typedefDemo()
{
	std::vector<FnPtr2> fnPtrList = { function1Demo, function2Demo };
	for (auto &fnPtr : fnPtrList)
	{
		std::cout << "Function returns: " << fnPtr('k') << std::endl;
	}

	std::vector<voidFnPtr2> fnPtrList2 = { voidFunction1, voidFunction2 };
	std::cout << "Now calling void functions: " << std::endl;
	for (auto &fnPtr : fnPtrList2)
	{
		fnPtr();
	}
}