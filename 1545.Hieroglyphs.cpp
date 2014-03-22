
 // Problem: 1545. Hieroglyphs
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1545
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1545.Hieroglyphs.tests

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::map<char, std::vector<char>> dict;

	int n;
	std::cin >> n;

	std::string line;
	std::getline(std::cin, line);

	for (int i = 0; i < n; ++i){
		std::getline(std::cin, line);

		dict[line[0]].push_back(line[1]);
	}

	std::getline(std::cin, line);
	std::vector<char> &sugg = dict[line[0]];

	std::sort(sugg.begin(), sugg.end());
	for (auto c : sugg){
		std::cout << line[0] << c << std::endl;
	}

	return 0;
}

