
 // Problem: 1607. Taxi
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1607
 // Author: Shed (86286AA)
 // Language: g++ (G++ 4.7.2 with C++)
 // Tests: 1607.Taxi.tests

#include <stdio.h>
#include <cmath>

int main()
{
	unsigned int a, da, b, db;
	scanf("%u %u %u %u", &a, &da, &b, &db);
	if (a > b){
		printf("%u\n", a);
	} else {
		int steps = (int)ceil(float(b - a)/(da + db));
		int ma = a + da * steps;
		int mb = b - db * (steps - 1);
		printf("%u\n", (ma < mb)?ma:mb);
	}
	return 0;
}

