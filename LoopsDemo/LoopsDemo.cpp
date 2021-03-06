// LoopsDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	//For loop standard syntax:
	//for(<loop variable declaration>; <condition>; <increment/decrement>){<code to be executed>}
	//<loop variable declaration> is something like int i = 0
	//<condition> is something like i < 10
	//<increment/decrement> is something like i++ or i-- or i += 2

	//Standard for loop:
	std::cout << "for loop: " << std::endl;
	for(int i =0 ; i < 10; i++) //increment is only ran at end of each loop
	{
		std::cout << i << std::endl; //loops 10 times, from 0 to 9
	}

	//While loop standard syntax:
	// while(<condition>){<code to be executed>}
	// <condition> is something like i<10
	// it is implicit that the increment/decrement is done inside the execution block, otherwise endless loop

	//Standard while loop:
	int k = 0;
	std::cout << "while loop: " << std::endl;
	while(k<10) //same loop as the for loop
	{
		std::cout << k++ << std::endl; //uncomment this line and comment next line to see difference between k++ and ++k
//		std::cout << ++k << std::endl;
	}


	//Bonus:
	//foreach loop (c++11 onwards)
	//Used to loop through a list of items to get each item
	//Standard syntax:
	//for(auto item: list){<code to be executed>}
	/*int list1[] = { 1,3,6,8,9 };
	std::cout << "foreach loop: " << std::endl;
	for(auto value: list1)
	{
		std::cout << value << std::endl;
	}*/


    return 0;
}

