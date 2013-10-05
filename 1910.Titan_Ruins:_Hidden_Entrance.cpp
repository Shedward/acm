
 // Problem: 1910. Titan Ruins: Hidden Entrance
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1910
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1910.Titan_Ruins:_Hidden_Entrance.tests

#include <stdio.h>

int main()
{
	int count;
	scanf("%d\n", &count);

	int el[3] = {0};
	int max = 0;
	int max_sum = 0;
	int cur_sum = 0;

	for (int cur = 0; cur < count; ++cur){

		cur_sum -= el[0];
		el[0] = el[1];
		el[1] = el[2];
		scanf("%d", el+2);
		cur_sum += el[2];

		if (cur_sum >= max_sum){
			max_sum = cur_sum;
			max = cur;
		}
	}
	printf("%d %d\n", max_sum, max);
	return 0;
}