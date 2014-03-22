
 // Problem: 1585. Penguins
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1585
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1585.Penguins.tests

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const char *names[3] = {
	"Macaroni Penguin",
	"Little Penguin",
	"Emperor Penguin"
};

int main()
{
	int n;
	std::cin >> n;
	std::string line;
	std::getline(std::cin, line);

	std::vector<int> freq(3, 0);
	while(n --> 0){
		std::getline(std::cin, line);
		switch (line[0]) {
			case 'M': freq[0]++; break;
			case 'L': freq[1]++; break;
			case 'E': freq[2]++; break;
		}
	}

	auto max = std::max_element(freq.begin(), freq.end());
	std::cout << names[max - freq.begin()] << std::endl;

	return 0;
}

