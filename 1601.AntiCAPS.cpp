
 // Problem: 1601. AntiCAPS
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1601
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1601.AntiCAPS.tests

#include <stdio.h>
#include <locale>

inline 
bool is_end_sentence(int ch){
	return ch == '.' or ch == '!' or ch == '?';
}

int main()
{
	bool new_sentence = true;
	int ch;
	while ((ch = getchar()) != EOF){
		if (isalpha(ch)) {
			ch = new_sentence ? toupper(ch) : tolower(ch);
			new_sentence = false;
		}
		new_sentence = new_sentence or is_end_sentence(ch);
		putchar(ch);
	}
	return 0;
}

