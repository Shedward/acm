
 // Problem: 1991. The battle near the swamp
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1991
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1991.The_battle_near_the_swamp.tests

#include <stdio.h>

int main()
{
	int n, k;
	scanf("%u %u", &n, &k);

	int unused = 0;
	int survived = 0;
	for (int cur, i = 0; i < n; ++i)
	{
		scanf("%u", &cur);
		if (cur > k){
			unused += cur - k;
		} else {
			survived += k - cur;
		}
	}

	printf("%u %u\n", unused, survived);
	return 0;
}

