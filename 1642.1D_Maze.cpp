
 // Problem: 1642. 1D Maze
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1642
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1642.1D_Maze.tests

#include <stdio.h>

int main()
{
	int count, exit_pos;
	scanf("%i %i", &count, &exit_pos);
	
	int next_fwd = 1001;
	int next_back = -1001;

	int obstacle;
	for (int i = 0; i < count; ++i)	{
		scanf("%i", &obstacle);
		if (obstacle > 0 and obstacle < next_fwd) next_fwd = obstacle;
		if (obstacle < 0 and obstacle > next_back) next_back = obstacle;
	}

	if (exit_pos > 0 and next_fwd > exit_pos){
		printf("%i %i\n", exit_pos, -2*next_back + exit_pos);
	} else if (exit_pos < 0 and next_back < exit_pos){
		printf("%i %i\n", 2*next_fwd - exit_pos, -exit_pos);
	} else {
		printf("Impossible\n");
	}
	return 0;
}

