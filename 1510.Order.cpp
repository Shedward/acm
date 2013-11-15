
 // Problem: 1510. Order
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1510
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1510.Order.tests

#include <stdio.h>
#include <map>

typedef unsigned int uint;

int main()
{
	std::map<uint, uint> freq;
	uint count;
	scanf("%u", &count);

	uint cur;
	uint max_val = 0;
	uint max_freq = 0;
	for (uint i = 0; i < count; ++i){
		scanf("%u", &cur);
		uint f = ++freq[cur];
		if (f > max_freq){
			max_val = cur;
			max_freq = f;
		}
	}
	printf("%u\n", max_val);
	return 0;
}

