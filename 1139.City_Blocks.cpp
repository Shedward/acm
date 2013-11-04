
 // Problem: 1139. City Blocks
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1139
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1139.City_Blocks.tests

#include <stdio.h>
#include <math.h>

int gcd(int a, int b){
	int c = a % b;
	while(c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main()
{
	int n, m;
	scanf("%u %u", &m, &n);
	--m; --n;
	printf("%u\n", m + n - gcd(m, n));
	return 0;
}

