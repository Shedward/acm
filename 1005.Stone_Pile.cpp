
 // Problem: 1005. Stone Pile
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1005
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1005.Stone_Pile.tests

#include <stdio.h>
#include <vector>

typedef unsigned long ulong;

inline
void printb(ulong n){
	for (int i = 7; i >= 0; --i){
	    if (n & (1 << i))
	        printf("1");
	    else
	        printf("0");
	}
}

inline
ulong abs(long num){
	return (num < 0) ? -num : num;
}

inline
ulong gray(ulong num){
	return num ^ (num >> 1);
}

inline 
int one_indx(ulong x){
	int r = 0;
	if (x & 0xffffffff00000000ul) r += 32;
	if (x & 0xffff0000ffff0000ul) r += 16;
	if (x & 0xff00ff00ff00ff00ul) r += 8;
	if (x & 0xf0f0f0f0f0f0f0f0ul) r += 4;
	if (x & 0xccccccccccccccccul) r += 2;
	if (x & 0xaaaaaaaaaaaaaaaaul) r += 1;
	return r;
}


int main()
{
	int count;
	scanf("%u", &count);

	std::vector<int> ws(count);

	int h1 = 0, h2 = 0;
	for (int i = 0; i < count; ++i)	{
		scanf("%u", &ws[i]);
		h1 += ws[i];
	}

	ulong maxperm = 1 << count; // 2^count
	std::vector<char> heap(count, 0);

	int diff, mindiff = abs(h1 - h2);
	int changed;
	for (long i = 1; i < maxperm; ++i){
		changed = one_indx(gray(i) ^ gray(i-1));
		if (heap[changed]){
			h1 += ws[changed];
			h2 -= ws[changed];
		} else {
			h1 -= ws[changed];
			h2 += ws[changed];
		}

		heap[changed] = not heap[changed];

		diff = abs(h1 - h2);
		if (diff < mindiff){
			mindiff = diff;
		}

		if (diff == 0){
			break;
		}
	}

	printf("%d\n", mindiff);
	return 0;
}

