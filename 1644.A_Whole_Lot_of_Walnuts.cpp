
 // Problem: 1644. A Whole Lot of Walnuts
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1644
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1644.A_Whole_Lot_of_Walnuts.tests

#include <stdio.h>

int main()
{
	int satisfies = 10, hungry = 2;

	int count;
	scanf("%u\n", &count);


	int cur;
	char line[10];
	for (int i = 0; i < count; ++i)	{
		scanf("%u %s\n", &cur, line);
		if (line[0] == 's'){
			if (cur < satisfies) 
				satisfies = cur;
		} else {
			if (cur > hungry) 
				hungry = cur;
		}
	}

	if (hungry < satisfies){
		printf("%u\n", satisfies);
	} else {
		printf("Inconsistent\n");
	}

	return 0;
}

