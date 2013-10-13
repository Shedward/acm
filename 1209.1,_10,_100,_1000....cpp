
 // Problem: 1209. 1, 10, 100, 1000...
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1209
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1209.1,_10,_100,_1000....tests

#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
	int count;
	scanf("%i", &count);

	int pos;
	while (count --> 0){
		scanf("%i", &pos);
		float n = ((sqrt(8*pos-7)+1)/2);
		if (floorf(n) == n){
			printf("1 ");
		} else {
			printf("0 ");
		}
	}
	return 0;
}

