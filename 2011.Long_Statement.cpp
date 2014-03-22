
 // Problem: 2011. Long Statement
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=2011
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 2011.Long_Statement.tests

#include <iostream>
#include <algorithm>

const int chars = 3;

int main() {

	// Read data

	std::ios_base::sync_with_stdio(false);
	int count;
	std::cin >> count;

	int freq[chars] = {0};

	for (int val; std::cin >> val;) {
		++freq[val-1];
	}

	// We can reduce biggest factorial. 
	// So we just calculate numerator from max(freq) + 1

	std::sort(std::begin(freq), std::end(freq));
	int num = freq[chars - 1]; 

	// Calculate combinations count.

	double res = 1;

	for (int ch = chars - 2; ch >= 0; --ch) {
		for (int denom = 1; denom <= freq[ch]; ++denom) {
			++num;
			res *= num;
			res /= denom;
		}
	}

	// Output answer

	std::cout << ((res >= 6) ? "Yes" : "No")	<< std::endl;
	return 0;
}

