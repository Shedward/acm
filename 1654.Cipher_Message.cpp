
 // Problem: 1654. Cipher Message
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1654
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1654.Cipher_Message.tests

#include <stdio.h>
#include <deque>

int main()
{
	std::deque<char> msg;
	char c = getchar();
	msg.push_front(c);

	while ((c = getchar()) != EOF){
		if (c != msg.back()){
			msg.push_back(c);
		} else {
			msg.pop_back();
		}
	}

	for (char c : msg){
		printf("%c", c);
	}
	return 0;
}

