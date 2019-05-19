#include "AllHead.hpp"

// Now level
int LEVEL = 0;

// map
extern int map[All_LEVEL][16][14];

// Count box to next level
int GetSpareBox()
{
	int count = 0;

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (map[LEVEL][i][j] == 4 || map[LEVEL][i][j] == 12)
			{
				count++;
			}
		}
	}

	return count;
}