
 // Problem: 1723. Sandro's Book
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1723
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1723.Sandro's_Book.tests

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main()
{
	std::string str;
	std::getline(std::cin, str);

	int freq[26] = {0};

	for (auto c : str){
		++freq[c - 'a'];
	}

	char most = 'a' + std::max_element(freq, std::end(freq)) - freq;

	std::cout << most;

	return 0;
}

