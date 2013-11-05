
 // Problem: 1796. Amusement Park
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1796
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1796.Amusement_Park.tests

#include <stdio.h>

int main()
{
	const int nomn = 6; 
	const int nom[nomn] = {10, 50, 100, 500, 1000, 5000};
	int val[nomn], cost;
	int total = 0;
	for (int i = 0; i < nomn; ++i)	{
		scanf("%u", &val[i]);
		total += val[i]*nom[i];
	}
	scanf("%u", &cost);


	int minnom = 0; // Find minimal nonzero nominal
	for (int i = 0; val[i] == 0 and i < nomn; ++i, ++minnom) {}

	int min = (total - nom[minnom] + cost) / cost;
	int max = total / cost;

	printf("%u\n", max - min + 1);
	for (int count = min; count <= max; ++count)
	{
		printf("%u ", count);
	}

	return 0;
}

