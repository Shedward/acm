
 // Problem: 1820. Ural Steaks
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1820
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1820.Ural_Steaks.tests

#include <iostream>
#include <math.h>

int main()
{
	int n, k;
	std::cin >> n >> k;

	int res;
	if (n > k){
		res = ceil(n * 2.0 / k);
	} else {
		res = 2;
	}
	std::cout << res;
	return 0;
}

