
 // Problem: 1106. Two Teams
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1106
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1106.Two_Teams.tests

#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
	int count;
	scanf("%u", &count);
	std::vector<std::vector<int> > friens(count);

	for (int i = 0; i < count; ++i)
	{
		int tmp;
		while (scanf("%u", &tmp), tmp > 0) {
			friens[i].push_back(tmp-1);
		}
	}

	std::vector<int> group_choosen(count, 0);
	auto cur = group_choosen.begin();
	int cur_i = 0;
	int grpsize = 0;
	while (cur != group_choosen.end()){
		*cur = 1;
		++grpsize;
		for (const auto &f : friens[cur_i]){
			if (group_choosen[f] == 0){
				group_choosen[f] = 2;
			}
		}
		cur = std::find(cur, group_choosen.end(), 0);
		cur_i = cur - group_choosen.begin();
	}

	printf("%i\n", grpsize);
	for (int i = 0; i < group_choosen.size(); ++i) {
		if (group_choosen[i] == 1){
			printf("%i ", i + 1);
		}
	}
	return 0;
}

