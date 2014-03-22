
 // Problem: 1100. Final Standings
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1100
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1100.Final_Standings.tests

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

typedef std::pair<int, int> Res;

int main()
{
	std::vector<Res> results;
	int count;
	std::cin >> count;

	while (count --> 0){
		int id, solc;
		std::cin >> id >> solc;
		results.push_back(std::make_pair(id, solc));
	}

	std::stable_sort(results.begin(), results.end(), [](const Res &lhs, const Res &rhs){
		return lhs.second > rhs.second;
	});

	for (auto v : results){
		std::cout << v.first << " " << v.second << std::endl;
	}

	return 0;
}

