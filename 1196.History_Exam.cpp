
 // Problem: 1196. History Exam
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1196
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1196.History_Exam.tests

#include <stdio.h>
#include <set>

int main()
{
	int n;
	scanf("%u", &n);

	std::set<int> pdates;
	for (int i = 0; i < n; ++i)
	{
		int date;
		scanf("%u", &date);
		pdates.insert(date);
	}

	int res = 0;

	int m;
	scanf("%u", &m);

	for (int i = 0; i < m; ++i)
	{
		int date;
		scanf("%u", &date);

		if (pdates.count(date)){
			++res;
		}
	}

	printf("%u\n", res);
	return 0;
}

