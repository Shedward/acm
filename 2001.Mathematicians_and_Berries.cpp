
 // Problem: 2001. Mathematicians and Berries
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=2001
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 2001.Mathematicians_and_Berries.tests

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%u %u", &a, &b);

	int at, bt, _;
	scanf("%u %u", &_, &bt);
	scanf("%u %u", &at, &_);

	printf("%u %u\n", a - at, b - bt);
	return 0;
}

