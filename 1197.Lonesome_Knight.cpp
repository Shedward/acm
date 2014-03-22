
 // Problem: 1197. Lonesome Knight
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1197
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2 with C++11)
 // Tests: 1197.Lonesome_Knight.tests

#include <stdio.h>

int d[4][4] = {2, 3, 4, 4,
			   3, 4, 6, 6,
			   4, 6, 8, 8,
			   4, 6, 8, 8};

int main()
{
	int count = 0;
	while (scanf("%d\n", &count) == 0);

	unsigned char c1, c2;
	int x ,y;

	while (count --> 0){

		while (scanf("\n%c%c", &c1, &c2) == 0);

		x = c1 - 'a';
		y = c2 - '1';

		x = (x < 4)?x:(7 - x);
		y = (y < 4)?y:(7 - y);

		printf("%d\n", d[x][y]);
	}
	return 0;
}

