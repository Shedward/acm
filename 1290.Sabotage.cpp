
 // Problem: 1290. Sabotage
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1290
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1290.Sabotage.tests

#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums;
	int n;
	scanf("%u", &n);
	nums.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		int c;
		scanf("%u", &c);
		nums.push_back(c);
	}

	std::sort(nums.rbegin(), nums.rend());

	for (int n : nums){
		printf("%u\n", n);
	}
}

