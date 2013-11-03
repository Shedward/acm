
 // Problem: 1083. Factorials!!!
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1083
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1083.Factorials!!!.tests

#include <stdio.h>

int main()
{
	int n, k=0;
	scanf("%u", &n);
	char c;
	while ((c = getchar()) != '\n') if (c == '!') ++k;

	long res = 1;
	for (int kk = 0; kk < n; kk += k)
	{
		res *= n - kk;
	}

	printf("%ld\n", res);
	return 0;
}

