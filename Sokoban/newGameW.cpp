#include "AllHead.hpp"

extern int map[All_LEVEL][16][14];

void newGameW()
{
	FILE* fp;
	if ((fp = fopen("newGame.txt", "w+")) == NULL)
	{
		printf("Open file errer!\n");
		exit(0);
	}

	for (int k = 0; k < All_LEVEL; k++)
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 14; j++)
			{
				fprintf(fp, "%d ", map[k][i][j]);
				if (j == 13)
				{
					fprintf(fp, "%c", '\n');
				}
			}
		}
		fprintf(fp, "%c", '\n');
	}

	fclose(fp);
}