
 // Problem: 1110. Power
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1110
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1110.Power.tests

#include <iostream>
#include <cmath>

int main()
{
	int n, m, y;
	int count = 0;
	std::cin >> n >> m >> y;

	for (int x = 0; x < m; ++x){
		int rem = 1;
		for (int i = 0; i < n; ++i){
			rem = rem * x % m;
		}
		if (rem == y){
			std::cout << x << " ";
			++count;
		}
	}

	if (count == 0){
		std::cout << "-1";
	}

	return 0;
}

