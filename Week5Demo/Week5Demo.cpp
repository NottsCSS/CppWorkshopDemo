// Week5Demo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class Vector3D {
public:
	//constructors
	Vector3D()
	{
		x = 0;
		y = 1;
		z = 2;
		std::cout << "Default constructor called" << std::endl;
	}
	Vector3D(double x_in, double y_in, double z_in)
	{
		x = x_in;
		y = y_in;
		z = z_in;
		std::cout << "Special constructor called" << std::endl;
	}
	~Vector3D()
	{
		std::cout << "Vector with values: \n" << "x: " << x << '\n';
		std::cout << "y: " << y << '\n' << "z: " << z << '\n';
		std::cout << "Is being destroyed" << std::endl;
	}

	//methods
	double length() const
	{
		return sqrt(x*x + y * y + z * z);
	}
	void translate(double x_val, double y_val, double z_val)
	{
		x += x_val;
		y += y_val;
		z += z_val;
	}
	void rotate(double x_angle, double y_angle, double z_angle)
	{
		x *= x_val
	}
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return x;
	}
	double get_z() const
	{
		return x;
	}

	Vector3D operator+(Vector3D const &rhs) const
	{
		return Vector3D(x + rhs.get_x(), y + rhs.get_y(), z + rhs.get_z());
	}

private:
	//fields
	double x, y, z;
};

int main()
{
	const Vector3D obj1(10,20,30);
	const Vector3D obj2(1,5,9);

	Vector3D obj3 = obj1 + obj2;



	std::cout << "x: " << obj1.get_x() << "\t y: " << obj1.get_y() << "\t z: " << obj1.get_z() << std::endl;
    return 0;
}

