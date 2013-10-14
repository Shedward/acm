
 // Problem: 1876. Centipede's Morning
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1876
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1876.Centipede's_Morning.tests

#include <stdio.h>

int main()
{
	int l, r;
	scanf("%u %u", &l, &r);
	int a1 = 120+2*(r-40);
	int a2 = 119+2*(l-40);
	printf("%u",(a1 > a2)?a1:a2);
	return 0;
}

