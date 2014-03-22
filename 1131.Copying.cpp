
 // Problem: 1131. Copying
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1131
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1131.Copying.tests

#include <stdio.h>
#include <math.h>
#include <algorithm>

int main()
 {
	int n,k,c;
	scanf("%u %u", &n, &k);

	c = ceil(log(std::min(k, n/2 + 1)) / log(2.0));

	n -= 1 << c;
	printf("%u", c + (n>0?((n%k)?n/k+1:n/k):0));
	return 0;
 }
