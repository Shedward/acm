
 // Problem: 1149. Sinus Dances
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1149
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2)
 // Tests: 1149.Sinus_Dances.tests

#include <iostream>
#include <string>
#include <sstream>

std::string A(int n){
	std::ostringstream s;
	for (int i = 1; i <= n - 1; ++i){
		s << "sin("<< i << ((i % 2)?"-":"+");
	}
	s << "sin(" << n << std::string(n, ')');
	return s.str();
}

std::string S(int n){
	std::ostringstream s;
	s << std::string(n - 1, '(') << A(1) << "+" << n;
	for (int i = 1; i < n; ++i){
		s << ")" << A(i+1) << "+" << n-i;
	}
	return s.str();
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << S(n) << std::endl;
	return 0;
}

