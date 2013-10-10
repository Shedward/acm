
 // Problem: 1313. Some Words about Sport
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1313
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1313.Some_Words_about_Sport.tests

#include <stdio.h>

int main()
{
	unsigned char size = 0;
	scanf("%u", &size);

	auto *pix = new unsigned char[size*size];

	for (int i = 0; i < size*size; ++i){
		scanf("%u", &pix[i]);
	}

	for (int r0 = 0; r0 < size; ++r0){
		for (int c = 0, r = r0; r >= 0; ++c, --r){
			printf("%u ", pix[r*size + c]);
		}
	}

	for (int c0 = 1; c0 < size; ++c0){
		for (int c = c0, r = size - 1; c < size; ++c, --r){
			printf("%u ", pix[r*size + c]);
		}
	}

	delete[] pix;
	return 0;
}

