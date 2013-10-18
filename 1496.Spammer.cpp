
 // Problem: 1496. Spammer
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1496
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1496.Spammer.tests

#include <iostream>
#include <string>
#include <map>

int main()
{
	int n;
	std::cin >> n;

	std::string line;
	std::getline(std::cin, line);

	std::map<std::string, int> freq;
	for (int i = 0; i < n; ++i)
	{
		std::getline(std::cin, line);
		++freq[line];
	}

	for (const auto &acc : freq){
		if (acc.second >= 2){
			std::cout << acc.first << std::endl;
		}
	}

	return 0;
}

