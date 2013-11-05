
 // Problem: 1786. Sandro's Biography
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1786
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1786.Sandro's_Biography.tests

#include <iostream>
#include <string>

int main()
{
	std::string man;
	std::getline(std::cin, man);

	const std::string str = "Sandro";

	int mincost = str.size() * 10;
	for (int i = 0; i < man.size() - str.size() + 1; ++i){
		int cost = 0;
		for (int j = 0; j < str.size(); ++j) {
			if (std::tolower(man[i+j]) != std::tolower(str[j])) cost += 5;
			if (std::isupper(man[i+j]) != std::isupper(str[j])) cost += 5;
		}
		if (cost < mincost){
			mincost = cost;
		}
	}

	std::cout << mincost;
	return 0;
}

