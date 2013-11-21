
 // Problem: 1005. Stone Pile
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1005
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1005.Stone_Pile.tests

#include <stdio.h>
#include <vector>
#include <alghorithm>

int main()
{
	int count;
	scanf("%u", &count);

	int mindiff = 0;
	std::vector<int> ws(count, 0);
	int h1 = 0; h2 = 0;
	for (int i = 0; i < count; ++i)	{
		scanf("%u", &ws[i]);
		h1 += ws[i];
	}
	mindiff = h1;

	/***/


	return 0;
}

