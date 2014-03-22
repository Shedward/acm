
 // Problem: 1712. Cipher Grille
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1712
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1712.Cipher_Grille.tests

#include <stdio.h>

inline  int i(int r, int c){
	return r*4+c;
}

int main()
{
	bool mask[16];
	char chifer[17], msg[16];

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			mask[i(r, c)] = getchar() == 'X';
		}
		getchar(); // Consume '\n'
	}

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			chifer[i(r, c)] = getchar();
		}
		getchar(); // Consume '\n'
	}

	int cur = 0;

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			if (mask[i(r, c)]) msg[cur++] = chifer[i(r, c)];
		}
	}

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			if (mask[i(3-c, r)]) msg[cur++] = chifer[i(r, c)];
		}
	}

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			if (mask[i(3-r, 3-c)]) msg[cur++] = chifer[i(r, c)];
		}
	}

	for (int r = 0; r < 4; ++r){
		for (int c = 0; c < 4; ++c){
			if (mask[i(c, 3-r)]) msg[cur++] = chifer[i(r, c)];
		}
	}

	msg[16] = '\0';

	printf("%s\n", msg);

	return 0;
}

