
 // Problem: 1161. Stripies
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1161
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1161.Stripies.tests

#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

int main()
{
	int count;
	scanf("%i", &count);

	std::vector<int> strps(count);
	for (int i = 0; i < count; ++i)	{
		scanf("%u", &strps[i]);
	}

	std::sort(strps.rbegin(), strps.rend());

	float res = strps[0];

	for (int i = 1; i < strps.size(); ++i){
		res = 2*sqrt(res * strps[i]);
	}

	printf("%.2f\n", res);

	return 0;
}

