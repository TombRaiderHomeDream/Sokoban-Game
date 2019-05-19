#include "AllHead.hpp"

// Now level
extern int LEVEL;

// map
extern int map[All_LEVEL][16][14];

// Count box to next level
extern int GetSpareBox();

// Go
void Move_One()
{
	if (!GetSpareBox())
	{
		LEVEL++;
	}

	int i, j;
	for (i = 0; i < 16; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (map[LEVEL][i][j] == 5 || map[LEVEL][i][j] == 8)
			{
				break;
			}
		}
		if (map[LEVEL][i][j] == 5 || map[LEVEL][i][j] == 8)
		{
			break;
		}
	}

	char userKey = _getch();

	switch (userKey)
	{
		// up
	case 'W':
	case 'w':
	case 72:
		// space
		if (map[LEVEL][i - 1][j] == 0)
		{
			map[LEVEL][i - 1][j] = 5;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// destination
		if (map[LEVEL][i - 1][j] == 3)
		{
			map[LEVEL][i - 1][j] = 8;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// box
		if (map[LEVEL][i - 1][j] == 4)
		{
			// space
			if (map[LEVEL][i - 2][j] == 0)
			{
				map[LEVEL][i - 2][j] = 4;
				map[LEVEL][i - 1][j] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i - 2][j] == 3)
			{
				map[LEVEL][i - 2][j] = 7;
				map[LEVEL][i - 1][j] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		// box in destination
		if (map[LEVEL][i - 1][j] == 7)
		{
			// space
			if (map[LEVEL][i - 2][j] == 0)
			{
				map[LEVEL][i - 2][j] = 4;
				map[LEVEL][i - 1][j] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i - 2][j] == 3)
			{
				map[LEVEL][i - 2][j] = 7;
				map[LEVEL][i - 1][j] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		break;

		// down
	case 'S':
	case 's':
	case 80:
		// space
		if (map[LEVEL][i + 1][j] == 0)
		{
			map[LEVEL][i + 1][j] = 5;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// destination
		if (map[LEVEL][i + 1][j] == 3)
		{
			map[LEVEL][i + 1][j] = 8;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// box
		if (map[LEVEL][i + 1][j] == 4)
		{
			// space
			if (map[LEVEL][i + 2][j] == 0)
			{
				map[LEVEL][i + 2][j] = 4;
				map[LEVEL][i + 1][j] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i + 2][j] == 3)
			{
				map[LEVEL][i + 2][j] = 7;
				map[LEVEL][i + 1][j] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		// box in destination
		if (map[LEVEL][i + 1][j] == 7)
		{
			// space
			if (map[LEVEL][i + 2][j] == 0)
			{
				map[LEVEL][i + 2][j] = 4;
				map[LEVEL][i + 1][j] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i + 2][j] == 3)
			{
				map[LEVEL][i + 2][j] = 7;
				map[LEVEL][i + 1][j] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		break;

		// left
	case 'A':
	case 'a':
	case 75:
		// space
		if (map[LEVEL][i][j - 1] == 0)
		{
			map[LEVEL][i][j - 1] = 5;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// destination
		if (map[LEVEL][i][j - 1] == 3)
		{
			map[LEVEL][i][j - 1] = 8;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// box
		if (map[LEVEL][i][j - 1] == 4)
		{
			// space
			if (map[LEVEL][i][j - 2] == 0)
			{
				map[LEVEL][i][j - 2] = 4;
				map[LEVEL][i][j - 1] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i][j - 2] == 3)
			{
				map[LEVEL][i][j - 2] = 7;
				map[LEVEL][i][j - 1] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		// box in destination
		if (map[LEVEL][i][j - 1] == 7)
		{
			// space
			if (map[LEVEL][i][j - 2] == 0)
			{
				map[LEVEL][i][j - 2] = 4;
				map[LEVEL][i][j - 1] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i][j - 2] == 3)
			{
				map[LEVEL][i][j - 2] = 7;
				map[LEVEL][i][j - 1] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		break;

		// right
	case 'D':
	case 'd':
	case 77:
		// space
		if (map[LEVEL][i][j + 1] == 0)
		{
			map[LEVEL][i][j + 1] = 5;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// destination
		if (map[LEVEL][i][j + 1] == 3)
		{
			map[LEVEL][i][j + 1] = 8;

			if (map[LEVEL][i][j] == 8)
				map[LEVEL][i][j] = 3;
			else
				map[LEVEL][i][j] = 0;
		}

		// box
		if (map[LEVEL][i][j + 1] == 4)
		{
			// space
			if (map[LEVEL][i][j + 2] == 0)
			{
				map[LEVEL][i][j + 2] = 4;
				map[LEVEL][i][j + 1] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i][j + 2] == 3)
			{
				map[LEVEL][i][j + 2] = 7;
				map[LEVEL][i][j + 1] = 5;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		// box in destination
		if (map[LEVEL][i][j + 1] == 7)
		{
			// space
			if (map[LEVEL][i][j + 2] == 0)
			{
				map[LEVEL][i][j + 2] = 4;
				map[LEVEL][i][j + 1] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}

			// destination
			if (map[LEVEL][i][j + 2] == 3)
			{
				map[LEVEL][i][j + 2] = 7;
				map[LEVEL][i][j + 1] = 8;

				if (map[LEVEL][i][j] == 8)
					map[LEVEL][i][j] = 3;
				else
					map[LEVEL][i][j] = 0;
			}
		}

		break;
	}
}