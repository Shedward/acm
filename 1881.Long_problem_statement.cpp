
 // Problem: 1881. Long problem statement
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1881
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++)
 // Tests: 1881.Long_problem_statement.tests

#include <iostream>
#include <string>

int main()
{
	int h, w, n;
	std::cin >> h >> w >> n;

	int pages = 1;
	int cur_chars = 0;
	int cur_lines = 1;
	int len = 0;

	std::string line;
	std::getline(std::cin, line); // consume newline after h w n
	std::getline(std::cin, line);
	cur_chars = line.length();

	while (n --> 1){
		std::getline(std::cin, line);
		len = line.length();
		cur_chars += 1 + len;
		if (cur_chars > w){
			cur_chars = len;
			++cur_lines;
			if (cur_lines > h){
				cur_lines = 1;
				++pages;
			}
		}
	}

	std::cout << pages << std::endl;
	return 0;
}

