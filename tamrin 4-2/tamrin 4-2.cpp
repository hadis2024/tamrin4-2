// tamrin 4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int x, y, z;
	double res;
	std::cout << "Enter value x: ";
	std::cin >> x;
	std::cout << "Enter value y: ";
	std::cin >> y;
	std::cout << "Enter value z: ";
	std::cin >> z;
	res = (static_cast<double>(x - y) * (x + z)) / ((x + y + z) * (x + y + z) + 1);
	std::cout << "Result: " << res << std::endl;
	return 0
}
