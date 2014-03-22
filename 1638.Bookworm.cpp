
 // Problem: 1638. Bookworm
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1638
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1638.Bookworm.tests

#include <iostream>

int main()
{
	int s, w, a1, an;
	std::cin >> s >> w >> a1 >> an;
	if (an > a1){
		std::cout << 2*w + (2*w + s)*(an - a1 - 1);
	} else {
		std::cout << 2*w*(a1 - an) + s*(a1-an+1);
	}
	return 0;
}

