
 // Problem: 1636. Penalty Time
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1636
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1636.Penalty_Time.tests

#include <stdio.h>

int main()
{
	int t1, t2;
	scanf("%u %u", &t1, &t2);

	int dt = t2 - t1;

	int pt = 0;
	for (int i = 0; i < 10; ++i)
	{
		int f;
		scanf("%u", &f);
		pt += f * 20;
	}

	if (dt >= pt){
		printf("No chance.\n");
	} else {
		printf("Dirty debug :(\n");
	}

	return 0;
}

