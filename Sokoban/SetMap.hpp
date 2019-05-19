#pragma once

#include "AllHead.hpp"

// Resource
IMAGE img[9];
int imgIndex[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 9};

/* Map */

/* Level
*       1: tree
*       2: trash
*/
int map[16][14] =
{
	{9, 9, 9, 9, 9, 1, 9, 1, 9, 9, 9, 9, 9, 9},
	{9, 9, 9, 1, 9, 1, 1, 5, 1, 1, 1, 9, 9, 9},
	{9, 9, 1, 0, 1, 1, 0, 4, 1, 1, 1, 1, 9, 9},
	{9, 9, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 9},
	{9, 1, 1, 0, 4, 0, 0, 0, 0, 0, 0, 1, 1, 1},
	{9, 9, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1},
	{9, 1, 0, 1, 0, 0, 0, 0, 0, 4, 0, 1, 1, 9},
	{1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 9},
	{9, 9, 9, 1, 1, 3, 3, 3, 0, 0, 1, 1, 9, 9},
	{9, 9, 1, 9, 9, 1, 1, 1, 1, 1, 9, 9, 9, 9},
	{9, 9, 9, 9, 9, 9, 9, 2, 2, 9, 9, 9, 9, 9},
	{9, 9, 9, 9, 9, 9, 9, 2, 2, 9, 9, 9, 9, 9},
	{9, 9, 9, 9, 9, 9, 9, 2, 2, 9, 9, 9, 9, 9},
	{9, 9, 9, 9, 9, 9, 9, 2, 2, 9, 9, 9, 9, 9},
	{9, 9, 9, 9, 9, 9, 9, 2, 2, 9, 9, 9, 9, 9},
	{9, 9, 9, 9, 6, 6, 6, 6, 6, 6, 6, 9, 9, 9}
};

// Load resources
void LoadResource()
{
	for (int i = 0; i < 9; i++)
	{
		char filename[20];
		sprintf_s(filename, "%d.png", imgIndex[i]);
		loadimage(img + i, filename);
	}
}


// Set map
void DrawMap()
{
	int x, y;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			x = 47 * j;
			y = 47 * i;
			switch (map[i][j])
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