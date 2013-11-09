
 // Problem: 1731. Dill
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1731
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1731.Dill.tests

#include <stdio.h>

int main()
{
	int m, n;
	scanf("%u %u", &n, &m);
	for (int i = 1; i <= n; ++i) {
		printf("%i ", i);
	}

	printf("\n");

	for (int i = 1; i <= m; ++i){
		printf("%i ", i*n + 1);
	}
	return 0;
}

