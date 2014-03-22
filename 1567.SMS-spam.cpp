
 // Problem: 1567. SMS-spam
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1567
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2)
 // Tests: 1567.SMS-spam.tests

#include <stdio.h>

int main()
{
	int total = 0;

	while (true) {
		char c = getchar();
		if (c == '\n') break;
		else if (c == ' ') total += 1;
		else if (c == '.') total += 1;
		else if (c == ',') total += 2;
		else if (c == '!') total += 3;
		else total += 1 + (c - 'a') % 3;
	}

	printf("%u\n", total);
	return 0;
}

