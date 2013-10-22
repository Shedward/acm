
 // Problem: 1025. Democracy in Danger
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1025
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1025.Democracy_in_Danger.tests

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int count;
	std::cin >> count;

	std::vector<int> grps;
	for (int i = 0; i < count; ++i)
	{
		int grp;
		std::cin >> grp;
		grps.push_back(grp);
	}

	std::sort(grps.begin(), grps.end());

	int res = 0;
	for (int i = 0; i < grps.size() / 2 + 1; ++i)
	{
		res += grps[i] / 2 + 1;
	}

	std::cout << res;
	return 0;
}

