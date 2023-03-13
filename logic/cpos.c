#include <stdio.h>
#include <stdlib.h>

void cpos(const int resolution[1],int *position[1][10],int *i)
{
	char a = getche();

	if (a == 'w')
	{
		position[1][0]--;
		if (position[1][0] < 0)
		{
			position[1][0] = 0;
		}
	}
	else if (a == 's')
	{
		position[1][0]++;
		if (position[1][0] > resolution[1] - 1)
		{
			position[1][0] = resolution[1] - 1;
		}
	}
	else if (a == 'a')
	{
		position[0][0]--;
		if (position[0][0] < 0)
		{
			position[0][0] = 0;
		}
	}
	else if (a == 'd')
	{
		position[0][0]++;
		if (position[0][0] > resolution[0] - 1)
		{
			position[0][0] = resolution[0] - 1;
		}
	}
	
}