// ItemStockingBasic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


bool addCommand(std::string itemName, int count, std::vector<std::pair<std::string, int>> &itemList) {
	for (auto &pair : itemList) { //check if the name already exists, if it does return -1
		if (pair.first == itemName) {
			return false;
		}
	}
	//    itemList.emplace_back(itemName, count);  //emplace_back calls constructor by default and only passes parameters
	itemList.push_back(std::make_pair(itemName, count));  //manually calling constructor with parameters
	return true;
}

void helpCommand() {
	std::cout << "Command list\n" << "---------------------------------------" << std::endl;
	std::cout << "-add {itemName} {itemCount}" << "  |  adds an item with itemName and itemCount to the current list" << std::endl;
	std::cout << "-print" << "   |  prints all the items in the current list" << std::endl;
	std::cout << "-help" << "   |   prints all commands and their usage" << std::endl;
	std::cout << "-exit" << "    |   exits the program" << std::endl;
}

void printCommand(std::vector<std::pair<std::string, int>> &itemList) {
	for (auto &pair : itemList) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}
}


int main()
{
	return 0;
}
