
 // Problem: 1785. Lost in Localization
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1785
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1785.Lost_in_Localization.tests

#include <iostream>

int main()
{

// от 1 до 4	 	несколько	few
// от 5 до 9	 	немного	 	several
// от 10 до 19	 	отряд	 	pack
// от 20 до 49	 	толпа	 	lots
// от 50 до 99	 	орда	 	horde
// от 100 до 249	множество	throng
// от 250 до 499	сонмище	 	swarm
// от 500 до 999	полчище	 	zounds
// от 1000	 		легион	 	legion

	int c;
	std::string name;
	std::cin >> c;
	if (c >= 1 and c < 5)
		name = "few";
	else if (c >= 5 and c < 10)
		name = "several";
	else if (c >= 10 and c < 20)
		name = "pack";
	else if (c >= 20 and c < 50)
		name = "lots";
	else if (c >= 50 and c < 100)
		name = "horde";
	else if (c >= 100 and c < 250)
		name = "throng";
	else if (c >= 250 and c < 500)
		name = "swarm";
	else if (c >= 500 and c < 1000)
		name = "zounds";
	else 
		name = "legion";

	std::cout << name;
	return 0;
}

