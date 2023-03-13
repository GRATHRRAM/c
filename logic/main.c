#include <stdio.h>
#include <stdlib.h>
#include "cfg.h"

int main()
{
	res[0] = 40;
	res[1] = 20;
	pos[0][0] = 2;
	pos[1][0] = 3;
	int* i = 1;
	

	gameloop(res, pos,i);
	
	printf("\ngame: stop\n");
	return 0;
}