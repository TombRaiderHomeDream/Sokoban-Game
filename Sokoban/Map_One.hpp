#pragma once

#include "AllHead.hpp"

// Now level
extern int LEVEL;

// picture number
extern IMAGE img[PICTURE_NUMBER];

// map
extern int map[All_LEVEL][16][14];

// Set map
void DrawMap_One()
{
	int x, y;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			x = 47 * j;
			y = 47 * i;
			switch (map[LEVEL][i][j])
			{
			case 0:
				putimage(x, y, img + 0);
				break;

			case 1:
				putimage(x, y, img + 1);
				break;

			case 2:
				putimage(x, y, img + 2);
				break;

			case 3:
				putimage(x, y, img + 3);
				break;

			case 4:
				putimage(x, y, img + 4);
				break;

			case 5:
			case 8:
				putimage(x, y, img + 5);
				break;

			case 6:
				putimage(x, y, img + 6);
				break;

			case 7:
				putimage(x, y, img + 7);
				break;

			case 9:
				putimage(x, y, img + 8);
				break;
			}
		}
	}
}