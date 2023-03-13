#include <stdio.h>
#include <stdlib.h>
#include "cfg.h"



void print(const int resolution[1],int *positon[1][10])
{
	system("cls");
	int y = 0;
	int x = 0;
	char* to_print = malloc(resolution[0] + 1);
	
	while (y < resolution[1])
	{
		x = 0;
		while (x < resolution[0])
		{
			if (positon[0][0] == x && positon[1][0] == y)
				to_print[x] = '@';
			else
				to_print[x] = '#';
			x++;
		}
		to_print[x] = '\0';
		printf("%s                  X = %i,Y = %i\n", to_print,positon[0][0],positon[1][0]);
		y++;
	}

	free(to_print);
}