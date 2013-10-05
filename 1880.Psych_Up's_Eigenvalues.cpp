
 // Problem: 1880. Psych Up's Eigenvalues
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1880
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1880.Psych_Up's_Eigenvalues.tests

#include <stdio.h>
#include <vector>
#include <utility>
#include <iterator>
#include <algorithm>

int main()
{
	// ---------------eigvals----------------
	// | approved | | untested | | rejected |
	// ------------^------------^------------
	//         eigen_end       end

	std::vector<int> eigvals;

	int len = 0;
	int val = 0;
	scanf("%d", &len);

	// Get first line of values
	while (len --> 0){
		scanf("%d", &val);
		eigvals.push_back(val);
	}

	// Clean non-eigen
	auto end = eigvals.end(); // End of aproved values

	while (scanf("%d", &len) > 0){
		auto eigen_end = eigvals.begin();
		while (len --> 0){
			scanf("%d", &val);
			auto f = std::find(eigen_end, end, val);

			// If find similar element place it to aproved section.
			if (f != end){
				std::swap(*f, *eigen_end);
				++eigen_end;
			}
		}
		end = eigen_end;
	}

	printf("%d\n", std::distance(eigvals.begin(), end));
	return 0;
}

