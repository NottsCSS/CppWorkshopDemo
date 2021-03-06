// Week6Demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Character
{
public:
	Character() = default;
	Character(unsigned level, unsigned str, unsigned dex, unsigned int_)
		: _level(level),
		  _str(str),
		  _dex(dex),
		  _int(int_)
	{
	}

protected:
	unsigned int _level = 1;
	unsigned int _str = 1;
	unsigned int _dex = 1;
	unsigned int _int = 1;
private:
	unsigned int _something = 5;
};

class Wizard : public Character
{
public:
	Wizard() : Character(1, 1, 1, 5) {}
protected:
	unsigned int _magicResist = 10 + 5*_int;
};

class Warrior : public Character
{
public:
	Warrior() : Character(1, 5, 1, 1) {};
protected:
	unsigned int _stunImmunity = 10 + 5 * _str;
};


int main()
{
	Wizard wizard1;
	Character *char1 = &wizard1;
	Character char2 = wizard1;
	std::cout << char1->getAttackDamage() << std::endl;
	//prints 25

	std::cout << char2.getAttackDamage() << std::endl;
	//prints 0


    return 0;
}

