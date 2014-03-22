
 // Problem: 1902. Neo-Venice
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1902
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1902.Neo-Venice.tests

#include <stdio.h>

int main()
{
	int n, t, s;
	scanf("%u %u %u", &n, &t, &s);

	int sn;
	for (int i = 0; i < n; ++i)
	{
		scanf("%u", &sn);
		printf("%.6f\n", s + float(t + (sn - s))/2);
	}
	return 0;
}

