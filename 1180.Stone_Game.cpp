
 // Problem: 1180. Stone Game
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1180
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1180.Stone_Game.tests

#include <stdio.h>

// 3 = 1 2
// 5 = 2 2 1
// 6 = 1 1 

int main()
{
	int sum = 0;
	char ch;
	while (true){
		ch = getchar();
		if (ch != '\n' and ch != EOF){
			sum += ch - '0';
		} else {
			break;
		}
	};

	if (sum % 3 == 0){
		printf("2\n");
	} else {
		printf("1\n%i\n", sum % 3);
	}
	return 0;
}

