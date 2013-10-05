
 // Problem: 1787. Turn for MEGA
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1787
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1787.Turn_for_MEGA.tests

#include <iostream>

int main()
{
	int n, out;
	std::cin >> out >> n;
	int cur = 0;
	int in = 0;
	while (n --> 0){
		std::cin >> in;
		cur += in;
		if (out > cur){
			cur = 0;
		} else {
			cur -= out;
		}
	}

	std::cout << cur;
	return 0;
}

