
 // Problem: 1877. Bicycle Codes
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1877
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1877.Bicycle_Codes.tests

#include <iostream>

int main()
{
	int c0 = 0;
	int c1 = 0;
	std::cin >> c0 >> c1;
	if (c0 % 2 == 0 or c1 % 2 == 1)
		std::cout << "yes";
	else
		std::cout << "no";
	return 0;
}

