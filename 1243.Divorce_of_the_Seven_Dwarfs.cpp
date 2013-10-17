
 // Problem: 1243. Divorce of the Seven Dwarfs
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1243
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1243.Divorce_of_the_Seven_Dwarfs.tests

#include <iostream>

int main()
{
	int coef[6] = {1, 3, 2, 6, 4, 5};

	int r = 0;
	std::string bignum;
	std::getline(std::cin, bignum);

	int n = 0;
	for (auto i = bignum.rbegin(); i != bignum.rend(); ++i, ++n)
	{
		r += (*i - '0') * coef[n % 6];
	}

	std::cout << r % 7;

	return 0;
}

