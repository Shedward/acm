
 // Problem: 1263. Elections
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1263
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1263.Elections.tests

#include <stdio.h>
#include <vector>

int main()
{
	int n, m;
	scanf("%u %u\n", &m, &n);

	std::vector<int> votes(m, 0);
	for (int i = 0; i < n; ++i){
		int vote;
		scanf("%u", &vote);
		++votes[vote - 1];
	}

	for (auto v : votes){
		printf("%.2f%%\n", v * 100.0f / n);
	}

	return 0;
}

