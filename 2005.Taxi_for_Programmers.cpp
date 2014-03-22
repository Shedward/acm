
 // Problem: 2005. Taxi for Programmers
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=2005
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 2005.Taxi_for_Programmers.tests

#include <iostream>

int main()
{
	int dist[5][5];

	for(unsigned c = 0; c < 5; ++c) {
		for(unsigned r = 0; r < 5; ++r) {
			std::cin >> dist[c][r];
		}
	}

	int min_length = 60000, min_path = 0;
	int path[4][5] = {
		1, 2, 3, 4, 5,
		1, 4, 3, 2, 5,
		1, 3, 2, 4, 5,
		1, 3, 4, 2, 5,
	};

	for(unsigned i = 0; i < 4; ++i) {
		int cur_length = 0;

		for(unsigned j = 0; j < 4; ++j) {
			int from = path[i][j] - 1;
			int to = path[i][j+1] - 1;
			cur_length += dist[from][to];
		}	

		if (cur_length <= min_length){
			min_length = cur_length;
			min_path = i;
		}
	}

	std::cout << min_length << std::endl;
	for(auto p : path[min_path]) {
		std::cout << p << " ";
	}

	return 0;
}

