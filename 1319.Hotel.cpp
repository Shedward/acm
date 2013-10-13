
 // Problem: 1319. Hotel
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1319
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1319.Hotel.tests

#include <stdio.h>
#include <deque>

int main()
{
	int n;
	scanf("%u",&n);

	std::deque<int> line;

	// create and print first line
	int x = 1;
	int dx = 1;
	for (int i = 0; i < n; ++i){
		line.push_front(x);
		x += dx;
		++dx;
	}

	for (auto x : line){
		printf("%u ", x);
	}

	// transform and print next lines
	for (int dr = n; dr > 1; --dr){
		int first = line.front() + dr;

		for (auto &x : line){
			++x;
		}

		line.push_front(first);
		line.pop_back();

		printf("\n");
		for (auto x : line){
			printf("%u ", x);
		}
	}
	return 0;
}

