#include "AllHead.hpp"

extern int map[All_LEVEL][16][14];

void ContinueGameR()
{
	FILE *fp;
	if ((fp = fopen("continueGame.txt", "r")) == NULL)
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
				fscanf_s(fp, "%d", &map[k][i][j]);
			}
		}
	}

	fclose(fp);
}