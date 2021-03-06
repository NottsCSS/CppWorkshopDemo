// ItemStockingBasic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

bool hasStudent(std::string name, std::vector<std::pair<std::string, int>> &studentList)
{
	for (auto &pair : studentList) {
		if (pair.first == name) {
			return true;
		}
	}
	return false;
}


void addCommand(std::vector<std::pair<std::string, int>> &studentList) {
	std::string name;
	int id;

	std::cout << "Enter name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name);

	if(hasStudent(name, studentList))
	{
		std::cout << "Student already in database!" << std::endl;
		return;
	}
	else
	{
		std::cout << "Enter student id: ";
		std::cin >> id;
		studentList.push_back({ name, id });
	}
}

void helpCommand() {
	std::cout << "Command list\n" << "---------------------------------------" << std::endl;
	std::cout << "-add" << "  |  calls the add function" << std::endl;
	std::cout << "-print" << "   |  prints all the items in the current list" << std::endl;
	std::cout << "-help" << "   |   prints all commands and their usage" << std::endl;
	std::cout << "-exit" << "    |   exits the program" << std::endl;
} 

void printCommand(std::vector<std::pair<std::string, int>> &studentList) {
	for (auto &pair : studentList) {
		std::cout << pair.first << ": " << pair.second << std::endl;
	}
}

enum class Command
{
	Undefined = 0, //default value
	Add = 1,
	Print = 2,
	Help = 3,
	Exit = 4
};

int main()
{
	std::string command;
	std::vector<std::pair<std::string, int>> studentList;
	static std::map<std::string, Command> commandMap = {
		{"-add", Command::Add},
		{"-print", Command::Print},
		{"-help", Command::Help},
		{"-exit", Command::Exit}
	};
	Command commandEnum;
	do
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		commandEnum = commandMap[command];
		switch(commandEnum)
		{
			case Command::Undefined:
				std::cout << "Invalid command! Type -help to view valid commands" << std::endl;
				break;
			case Command::Help: 
				helpCommand();
				break;
			case Command::Add: 
				addCommand(studentList);
				break;
			case Command::Print:
				printCommand(studentList);
				break;
			case Command::Exit:
				std::cout << "Exit called" << std::endl;
				break;
			//Note that there is no default as there cannot be any other cases for this enum type
		}
		
	} while (commandEnum != Command::Exit);

	return 0;
}
