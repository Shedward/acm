
 // Problem: 1617. Flat Spots
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1617
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1617.Flat_Spots.tests

#include <iostream>
#include <map>

int main()
{
	std::map<int, int> pairs;

	int n;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int d;
		std::cin >> d;
		++pairs[d];
	}
	
	int count = 0;
	for (auto v : pairs){
		count += v.second / 4;
	}

	std::cout << count;
	return 0;
}

