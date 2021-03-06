#include "stdafx.h"
long* throwFunction(int k)
{
	long *a = new long[100000];
	//	long a[1000] = {};
	if (a[k] != 1) throw std::string("Oh no"); //memory will leak because pointer will not be returned for cleanup
	return a;
}

int main()
{
	long *ptr = nullptr;
	try
	{
		ptr = throwFunction(9999); //ptr will not be assigned a value
	}
	catch (std::string &stringException)
	{
		std::cout << stringException << std::endl;
	}
	catch (...)
	{
		std::cout << "Oh no unknown exception thrown" << std::endl;
	}
	delete[]ptr;
	return 0;
}

