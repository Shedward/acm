
 // Problem: 1510. Order
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1510
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1510.Order.tests

#include <iostream>
#include <map>
#include <string>

typedef unsigned int uint;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::map<std::string, uint> freq;
	uint count;
	scanf("%u", &count);

	std::string cur;
	std::string max_val;
	uint max_freq = 0;
	for (uint i = 0; i < count; ++i){
		std::getline(std::cin, cur);
		uint f = ++freq[cur];
		if (f > max_freq){
			max_val = cur;
			max_freq = f;
		}
	}
	std::cout << max_val;
	return 0;
}

