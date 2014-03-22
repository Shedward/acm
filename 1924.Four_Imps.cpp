
 // Problem: 1924. Four Imps
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1924
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2 with C++11)
 // Tests: 1924.Four_Imps.tests

#include <stdio.h>

int main()
{
	int n;
	scanf("%u", &n);

	if (n*(n+1)/2 % 2 == 0){
		printf("black\n");
	} else {
		printf("grimy\n");
	}

	return 0;
}

