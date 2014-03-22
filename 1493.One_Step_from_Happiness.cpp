
 // Problem: 1493. One Step from Happiness
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1493
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2)
 // Tests: 1493.One_Step_from_Happiness.tests

#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i < 3; ++i) { sum += getchar() - '0'; }
	for (int i = 0; i < 2; ++i) { sum -= getchar() - '0'; }

	if (sum > 9 or sum < 0){
		printf("No\n");
	} else {
		printf("Yes\n");
	}

	return 0;
}

