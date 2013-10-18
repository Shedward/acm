
 // Problem: 1349. Farm
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1349
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1349.Farm.tests

#include <stdio.h>

int main()
{
	int n;
	scanf("%u", &n);

	if (n == 1){
		printf("1 2 3\n");
	} else if (n == 2){
		printf("3 4 5\n");
	} else {
		printf("-1\n");
	}
	return 0;
}

