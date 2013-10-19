
 // Problem: 1196. History Exam
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1196
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1196.History_Exam.tests

#include <iostream>
#include <set>

int main()
{
	int n;
	std::cin >> n;

	std::set<int> pdates;
	for (int i = 0; i < n; ++i)
	{
		int date;
		std::cin >> date;
		pdates.insert(date);
	}

	int res = 0;

	int m;
	std::cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int date;
		std::cin >> date;

		if (pdates.count(date)){
			++res;
		}
	}

	std::cout << res;
	return 0;
}

