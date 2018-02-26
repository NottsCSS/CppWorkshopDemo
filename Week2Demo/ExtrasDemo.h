#pragma once

enum class Enum1 : int
{
	defaultType = 0,
	type1 = 1
};

enum Enum2 : int
{
	defaultType = 0,
	type1 = 1
};

void enumFunc1(int a)
{
	std::cout << a << std::endl;
}

void mainFunc()
{
	enumFunc1(Enum2::type1); //works
//	enumFunc1(Enum1::type1); //compile error
}
