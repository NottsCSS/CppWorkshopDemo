#pragma once
#include "stdafx.h"

class Vector3D{
public:
	double x, y, z;

	double length() const
	{
		return sqrt(x*x + y*y + z*z);
	}
	void add(Vector3D &rhs)
	{
		x += rhs.x;
		y += rhs.y;
		z += rhs.z;
	}
};

inline void classDemo1()
{
	Vector3D vector1{5,3,1};

	Vector3D vector2;
	vector2.x = 3;
	vector2.y = 2.2;
	vector2.z = -1.7;
	Vector3D *vector3 = new Vector3D{-2,3.3,1.5};

	std::cout << vector3->length() << std::endl;
	std::cout << (*vector3).length() << std::endl;

	delete vector3;
//	std::cout << vector1.length() << std::endl;
//	vector1.add(vector2);
//
//	std::cout << vector1.length() << std::endl;
//	std::cout << vector2.length() << std::endl;

}


class book
{
public:
	std::string title = {};
	long ISBN = 0;
	bool isAvailable = false;
	void loanBook() {
		if (!isAvailable)	std::cout << "Book already loaned" << std::endl;
		isAvailable = false;
	}
	void returnBook() {
		if (isAvailable)	std::cout << "Book already returned!" << std::endl;
		isAvailable = true;
	}
};

inline void classDemo2()
{
	book book1;
	book1.title = "To Kill a Mockingbird";
	book1.ISBN = 9780446310789;
	book1.isAvailable = true;

	std::cout << "Available: " << book1.isAvailable << std::endl;
	book1.loanBook();
	std::cout << "Available: " << book1.isAvailable << std::endl;
	book1.loanBook();
	book1.returnBook();
	book1.returnBook();
}

