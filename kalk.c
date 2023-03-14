#include <stdio.h>
#include <stdlib.h>

float add(float num[],int len)
{
	float sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum = sum + num[i];
	}
	return sum;
}

float sub(float num[],int len)
{
	float sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum = sum - num[i];
	}
	return sum;
}

float mul(float num[],int len)
{
	float sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum = sum * num[i];
	}
	return sum;
}

float divv(float num[],int len)
{
	float sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum = sum / num[i];
	}
	return sum;
}




int main(int argc,char* argv[])
{
	float tab[argc];
	const char *con[] = {"-add","-sub","-mul","-div"};
	for(int i = 2; i < argc; i++)
	{
		tab[i] = atof(argv[i]);
	}
	if(argc == 1)
	{
		printf("\n*argv[] empty!!!\n");
		return 0;
	}

	if(*argv[1] == *con[0])
	{
		printf("\n%f\n",add(tab,argc));
	}
	else if(*argv[1] == *con[1])
	{
		printf("\n%f\n",sub(tab,argc));
	}
	else if(*argv[1] == *con[2])
	{
		printf("\n%f\n",mul(tab,argc));
	}
	else if(*argv[1] == *con[3])
	{
		printf("\n%f\n",divv(tab,argc));
	}
	else
	{
		printf("\nin *argv[1] comand not found!!!\n");
	}
}
