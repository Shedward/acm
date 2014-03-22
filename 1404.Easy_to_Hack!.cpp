
 // Problem: 1404. Easy to Hack!
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1404
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1404.Easy_to_Hack!.tests

#include <stdio.h>

int main()
{
	int cur, diff = 5;

	while((cur = getchar() - 'a') != '\n' - 'a'){
		cur -= diff;
		cur = (cur > 0) ? cur : (cur + 26);
		diff = (cur + diff) % 26;
		printf("%c", cur % 26 + 'a');
	}
	return 0;
}

