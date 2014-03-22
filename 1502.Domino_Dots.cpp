
 // Problem: 1502. Domino Dots
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1502
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1502.Domino_Dots.tests

#include <iostream>

int main()
{
	long long n;
	std::cin >> n;
	std::cout << n*(n+1)*(n+2)/2;
	return 0;
}

