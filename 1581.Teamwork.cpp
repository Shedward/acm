
 // Problem: 1581. Teamwork
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1581
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2)
 // Tests: 1581.Teamwork.tests

#include <stdio.h>

int main()
{
	int count;
	scanf("%u\n", &count);

	int val;
	scanf("%u", &val);
	int len = 1;

	while (count --> 1){
		int cur;
		scanf("%u", &cur);
		if (cur == val){
			++len;
		} else {
			printf("%u %u ", len, val);
			val = cur;
			len = 1;
		}
	}
	printf("%u %u", len, val);
	return 0;
}

