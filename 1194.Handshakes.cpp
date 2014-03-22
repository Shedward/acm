
 // Problem: 1194. Handshakes
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1194
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1194.Handshakes.tests

#include <stdio.h>

int main()
{
	int n, k;
	scanf("%u %u", &n, &k);
	printf("%u\n", (n*(n - 1)/2) - k);
	return 0;
}

