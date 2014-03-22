
 // Problem: 1925. British Scientists Save the World
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1925
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1925.British_Scientists_Save_the_World.tests

#include <stdio.h>

int main()
{
	int n, k;
	scanf("%u %u", &n, &k);

	int delta = 0, g, h;
	for (int i = 0; i < n; ++i)
	{
		scanf("%u %u", &g, &h);
		delta += 2 - g + h;
	}

	int next = k - 2 - delta;

	if (next > 0){
		printf("%u\n", next);
	} else {
		printf("Big Bang!\n");
	}

	return 0;
}

