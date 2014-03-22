
 // Problem: 1935. Tears of Drowned
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1935
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1935.Tears_of_Drowned.tests

#include <stdio.h>

int main()
{
	int n;
	scanf("%u", &n);

	int max = 0, val; 
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%u", &val);
		count += val;
		if (val > max) max = val;
	}

	count += max;
	printf("%d\n", count);
	return 0;
}

