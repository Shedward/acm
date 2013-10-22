
 // Problem: 1457. Heating Main
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1457
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1457.Heating_Main.tests

#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%u", &n);

	for (int i = 0; i < n; ++i)
	{
		int val;
		scanf("%u", &val);
		sum += val;
	}

	printf("%0.6f\n", float(sum)/n);
	return 0;
}

