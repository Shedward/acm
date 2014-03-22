
 // Problem: 1120. Sum of Sequential Numbers
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1120
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1120.Sum_of_Sequential_Numbers.tests

#include <stdio.h>
#include <math.h>

int main()
{
	long unsigned n, p;
	scanf("%lu",&n);

	p = (long)ceil((sqrt(8.0*n+1.0)-1.0)/2.0); // Maximum posible p
	int pa = 0;
	while (true){
		pa = n - p*(p-1)/2;
		if ((pa > 0) and (pa % p == 0)){
			printf("%lu %lu\n", pa/p, p);
			return 0;
		} else {
			p--;
		}
	}

	return 0;
}

