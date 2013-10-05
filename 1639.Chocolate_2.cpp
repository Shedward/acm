
 // Problem: 1639. Chocolate 2
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1639
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1639.Chocolate_2.tests

#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	if ((m-1 + (n-1)*m)  %  2 == 0){
		printf("[second]=:]");
	} else {
		printf("[:=[first]");
	}
	return 0;
}

