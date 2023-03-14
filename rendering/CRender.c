#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define std_resX 40
#define std_resY 20


void basic_print(int resolutionX,int resolutionY)
{
	char *to_print = malloc(resolutionX + 1);
	for(int y = 0; y < resolutionY; y++)
	{
		for(int x = 0; x < resolutionX; x++)
		{
			to_print[x] = '#';
		}
		
		printf("%s\n",to_print);
	}
	free(to_print);
}


int main(int argc,char *argv[])
{
	char *con[] = {"-basic"};

	if(*argv[1] == *con[0])
	{
		if(argc > 3)
		{
			int c[] = {strtol(argv[2],NULL,10),strtol(argv[3],NULL,10)};;
			basic_print(c[0],c[1]);
		}
		else
		{
			basic_print(std_resX,std_resY);
		}
	}
}
