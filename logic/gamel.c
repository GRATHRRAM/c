#include "cfg.h"

void gameloop(const int resolution[1], int* position[1][10],int *game_loop_switch)
{
	while (game_loop_switch)
	{
		print(resolution, position);
		cpos(resolution, position, game_loop_switch);
	}
}