#define std_resX 800
#define std_resY 600
#include <stdio.h>
#include <stdlib.h>
typedef int color[2];

void rm_fl(char *name)
{
	char *con = "rm -rf " + *name;
	system(con);
}

void write_image(char* name, int resolutionX, int resolutionY, color color_of_image)
{
	FILE* file;
	file = fopen(name, "w");
	fprintf(file, "P3\n%i\n%i\n255\n#IMG_RENDERD_BY_GRATHRRAM_PROGRAM\n", resolutionX, resolutionY);
	for (int y = 0; y < resolutionY; y++)
	{
		for (int x = 0; x < resolutionX; x++)
		{
			fprintf(file, "%i %i %i\n", color_of_image[0], color_of_image[1], color_of_image[2]);
		}
	}
	fclose(file);
}

void write_ns(char *name, int resolutionX, int resolutionY)
{
	FILE* file;
	file = fopen(name, "w");
	fprintf(file, "P3\n%i\n%i\n255\n#IMG_RENDERD_BY_GRATHRRAM_PROGRAM\n", resolutionX, resolutionY);
	for (int y = 0; y < resolutionY; y++)
	{
		for (int x = 0; x < resolutionX; x++)
		{
			fprintf(file, "%i %i %i\n",rand() % 255, rand() % 255, rand() % 255);
		}
	}
	fclose(file);
}

void write_shrp(char *name, int resolutionx, int resolutiony,color start_color)
{
	int cc[] = {start_color[0],start_color[1],start_color[2]};
	FILE* file;
	file = fopen(name, "w");
	fprintf(file, "p3\n%i\n%i\n255\n#img_renderd_by_grathrram_program\n", resolutionx, resolutiony);
	for (int y = 0; y < resolutiony; y++)
	{
		for (int x = 0; x < resolutionx; x++)
		{
			fprintf(file, "%i %i %i\n",cc[0], cc[1], cc[2]);
			cc[0] = cc[0] + rand() % 10;cc[1] = cc[1] + rand() % 10;cc[2] = cc[2] + rand() % 10;
			if(cc[0] > 255) cc[0] = 0;
			if(cc[1] > 255) cc[1] = 0;
			if(cc[2] > 255) cc[2] = 0;
		}
	}
	fclose(file);
}

void write_grd_simpl(char *name, int resolutionx, int resolutiony,color start_color)//not working only this
{
	int c[] = {start_color[0],start_color[1],start_color[2]};
	int resh = resolutionx / 2;
	FILE* file;
	file = fopen(name, "w");
	fprintf(file, "p3\n%i\n%i\n255\n#img_renderd_by_grathrram_program\n", resolutionx, resolutiony);
	for (int y = 0; y < resolutiony; y++)
	{
		for (int x = 0; x < resolutionx; x++)
		{
			fprintf(file, "%i %i %i\n",c[0],c[1],c[2]);
			c[0] = c[0] - resh;
			c[1] = c[1] - resh;
			c[2] = c[2] - resh;
			if(c[0] < 0) c[0] = 0;
			if(c[1] < 0) c[1] = 0;
			if(c[2] < 0) c[2] = 0;
		}
	}
	fclose(file);
}


int main()
{
	color cc;
	int inp;
	int res[1];
	printf("mode: ");
	scanf("%i",&inp);
	if(inp == 0)
	{
		printf("resolutionX = ");
		scanf("%i",&res[0]);
		printf("resolutionY = ");
		scanf("%i",&res[1]);
		printf("rgb1 = ");
		scanf("%i",&cc[0]);
		printf("rgb2 = ");
		scanf("%i",&cc[1]);
		printf("rgb3 = ");
		scanf("%i",&cc[2]);
		write_image("fl.ppm",res[0],res[1],cc);
		printf("\nDone!\n");
	}
	else if (inp == 1)
	{
		printf("resolutionX = ");
		scanf("%i",&res[0]);
		printf("resolutionY = ");
		scanf("%i",&res[1]);
		write_ns("fl.ppm",res[0],res[1]);
		printf("\nDone!\n");
	}
	else if (inp == 2)
	{
		printf("resolutionX = ");
		scanf("%i",&res[0]);
		printf("resolutionY = ");
		scanf("%i",&res[1]);
		printf("rgb1 = ");
		scanf("%i",&cc[0]);
		printf("rgb2 = ");
		scanf("%i",&cc[1]);
		printf("rgb3 = ");
		scanf("%i",&cc[2]);

		write_shrp("fl.ppm",res[0],res[1],cc);
		printf("\nDone!\n");
	}
	else if (inp == 3)
	{
		printf("resolutionX = ");
		scanf("%i",&res[0]);
		printf("resolutionY = ");
		scanf("%i",&res[1]);
		printf("rgb1 = ");
		scanf("%i",&cc[0]);
		printf("rgb2 = ");
		scanf("%i",&cc[1]);
		printf("rgb3 = ");
		scanf("%i",&cc[2]);

		write_grd_simpl("fl.ppm",res[0],res[1],cc);
		printf("\nDone!\n");
	}
}
