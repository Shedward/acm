
 // Problem: 1225. Flags
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1225
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1225.Flags.tests

#include <stdio.h>

int main()
{
	int n;
	scanf("%u", &n);

	int x1 = 1, x2 = 1;

	for (int i = 1; i < n; ++i){
		int t = x1;
		x1 += x2;
		x2 = t;
	}

	printf("%u\n", x2*2);
	return 0;
}

