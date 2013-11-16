
 // Problem: 1777. Anindilyakwa
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1777
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1777.Anindilyakwa.tests

#include <iostream>
#include <vector>

typedef long long Num;

inline
Num  min(Num x, Num y){
	return (x < y) ? x : y;
}

inline
Num abs(Num x) {
	return (x < 0) ? -x : x;
}

Num find_mindiff(std::vector<Num> &v) {
	Num res = abs(v[0] - v[1]);
	for (int i = 0; i < v.size(); ++i)
		for (int j = i+1; j < v.size(); ++j) {
			res = min(abs(v[i] - v[j]), res);
		}
	return res;
}

int main()
{
	std::vector<Num> v(3, 0);
	std::cin >> v[0] >> v[1] >> v[2];
	v.reserve(10);

	int res = 0;

	while (v.back()){
		++res;
		v.push_back(find_mindiff(v));
	}

	std::cout << res;
	return 0;
}