
 // Problem: 1563. Bayan
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1563
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1563.Bayan.tests

#include <iostream>
#include <string>
#include <map>

int main()
{
	int count;
	std::cin >> count;
	std::string line;
	std::getline(std::cin, line);

	std::map<std::string, int> freq;
	for (int i = 0; i < count; ++i)
	{
		std::getline(std::cin, line);
		++freq[line];
	}

	int bayanc = 0;
	for (const auto &val : freq){
		bayanc += val.second - 1;
	}

	std::cout << bayanc;
	return 0;
}

