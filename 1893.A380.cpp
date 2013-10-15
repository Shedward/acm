
 // Problem: 1893. A380
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1893
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1893.A380.tests

#include <stdio.h>

int main()
{
	int r;
	char c;
	scanf("%u%c", &r, &c);
	
	if (r <= 2){
		if (c == 'A' or c == 'D'){
			printf("window\n");
		} else {
			printf("aisle\n");
		}
	} else if (r <= 20){
		if (c == 'A' or c == 'F'){
			printf("window\n");
		} else {
			printf("aisle\n");
		}
	} else {
		switch (c) {
			case 'A':
			case 'K': 
				printf("window\n"); break;
			case 'C':
			case 'D':
			case 'G':
			case 'H':
				printf("aisle\n"); break;
			default:
				printf("neither\n"); break;
		}
	}
	return 0;
}

