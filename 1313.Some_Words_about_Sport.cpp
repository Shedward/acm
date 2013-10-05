
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

	auto *sig = new unsigned char[size*size];

	for (int i = 0; i < size*size; ++i)
	{
		scanf("%u", &sig[i]);
	}

	int c = -1, r = 1;
	while (c < size - 1){
		r--; c++;
		if (r < 0){
			r = c;
			c = 0;
		}
		printf("%u ", sig[r*size + c]);
	}

	c = 1;
	r = size - 1;
	while (c < size - 1 or r < size - 1){
		printf("%u ", sig[r*size + c]);
		
		r--; c++;
		if (c >= size){
			c = r + 2;
			r = size - 1;
		}

	}
	printf("%u ", sig[size*size - 1]);

	delete[] sig;
	return 0;
}

