
 // Problem: 1792. Hamming Code
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1792
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1792.Hamming_Code.tests

#include <stdio.h>
int main(){

	int i, m[8];

	for(i = 1; i < 8; i++){
		scanf("%d",m+i);
	}

	for (int i = 1; i < 9; ++i){
	if    (((m[2] + m[3] + m[4]) % 2 != m[5])
		or ((m[1] + m[3] + m[4]) % 2 != m[6])
		or ((m[1] + m[2] + m[4]) % 2 != m[7]))
		{
			m[i] = not m[i];
			m[i-1] = not m[i-1];
		}
	}

	for (int i = 1; i < 8; ++i)
	{
		printf("%d ", m[i]);
	}
}