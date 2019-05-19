#pragma once

#include "AllHead.hpp"

// Now level
extern int LEVEL;

// picture number
extern IMAGE img[PICTURE_NUMBER];

// map
extern int map[All_LEVEL][16][14];

// Set map
void DrawMap_Tow()
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
			case 1:
				putimage(x, y, img + 1);
				break;

			case 9:
				putimage(x, y, img + 8);
				break;

			case 10:
				putimage(x, y, img + 9);
				break;

			case 11:
				putimage(x, y, img + 10);
				break;

			case 12:
				putimage(x, y, img + 11);
				break;

			case 13:
			case 16:
				putimage(x, y, img + 12);
				break;

			case 14:
				putimage(x, y, img + 13);
				break;

			case 15:
				putimage(x, y, img + 14);
				break;
			}
		}
	}
}