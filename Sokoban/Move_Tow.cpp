#include "AllHead.hpp"

// Now level
extern int LEVEL;

// map
extern int map[All_LEVEL][16][14];

// Count box to next level
extern int GetSpareBox();

// Go
void Move_Tow()
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
			if (map[LEVEL][i][j] == 13 || map[LEVEL][i][j] == 16)
			{
				break;
			}
		}
		if (map[LEVEL][i][j] == 13 || map[LEVEL][i][j] == 16)
		{
			break;
		}
	}

	char userKey_tow = _getch();

	switch (userKey_tow)
	{
		// up
	case 'W':
	case 'w':
	case 72:
		// space
		if (map[LEVEL][i - 1][j] == 11)
		{
			map[LEVEL][i - 1][j] = 13;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// destination
		if (map[LEVEL][i - 1][j] == 14)
		{
			map[LEVEL][i - 1][j] = 16;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// box
		if (map[LEVEL][i - 1][j] == 12)
		{
			// space
			if (map[LEVEL][i - 2][j] == 11)
			{
				map[LEVEL][i - 2][j] = 12;
				map[LEVEL][i - 1][j] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i - 2][j] == 14)
			{
				map[LEVEL][i - 2][j] = 15;
				map[LEVEL][i - 1][j] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		// box in destination
		if (map[LEVEL][i - 1][j] == 15)
		{
			// space
			if (map[LEVEL][i - 2][j] == 11)
			{
				map[LEVEL][i - 2][j] = 12;
				map[LEVEL][i - 1][j] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i - 2][j] == 14)
			{
				map[LEVEL][i - 2][j] = 15;
				map[LEVEL][i - 1][j] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		break;

		// down
	case 'S':
	case 's':
	case 80:
		// space
		if (map[LEVEL][i + 1][j] == 11)
		{
			map[LEVEL][i + 1][j] = 13;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// destination
		if (map[LEVEL][i + 1][j] == 14)
		{
			map[LEVEL][i + 1][j] = 16;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// box
		if (map[LEVEL][i + 1][j] == 12)
		{
			// space
			if (map[LEVEL][i + 2][j] == 11)
			{
				map[LEVEL][i + 2][j] = 12;
				map[LEVEL][i + 1][j] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i + 2][j] == 14)
			{
				map[LEVEL][i + 2][j] = 15;
				map[LEVEL][i + 1][j] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		// box in destination
		if (map[LEVEL][i + 1][j] == 15)
		{
			// space
			if (map[LEVEL][i + 2][j] == 11)
			{
				map[LEVEL][i + 2][j] = 12;
				map[LEVEL][i + 1][j] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i + 2][j] == 14)
			{
				map[LEVEL][i + 2][j] = 15;
				map[LEVEL][i + 1][j] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		break;

		// left
	case 'A':
	case 'a':
	case 75:
		// space
		if (map[LEVEL][i][j - 1] == 11)
		{
			map[LEVEL][i][j - 1] = 13;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// destination
		if (map[LEVEL][i][j - 1] == 14)
		{
			map[LEVEL][i][j - 1] = 16;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// box
		if (map[LEVEL][i][j - 1] == 12)
		{
			// space
			if (map[LEVEL][i][j - 2] == 11)
			{
				map[LEVEL][i][j - 2] = 12;
				map[LEVEL][i][j - 1] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i][j - 2] == 14)
			{
				map[LEVEL][i][j - 2] = 15;
				map[LEVEL][i][j - 1] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		// box in destination
		if (map[LEVEL][i][j - 1] == 15)
		{
			// space
			if (map[LEVEL][i][j - 2] == 11)
			{
				map[LEVEL][i][j - 2] = 12;
				map[LEVEL][i][j - 1] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i][j - 2] == 14)
			{
				map[LEVEL][i][j - 2] = 15;
				map[LEVEL][i][j - 1] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		break;

		// right
	case 'D':
	case 'd':
	case 77:
		// space
		if (map[LEVEL][i][j + 1] == 11)
		{
			map[LEVEL][i][j + 1] = 13;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// destination
		if (map[LEVEL][i][j + 1] == 14)
		{
			map[LEVEL][i][j + 1] = 16;

			if (map[LEVEL][i][j] == 16)
				map[LEVEL][i][j] = 14;
			else
				map[LEVEL][i][j] = 11;
		}

		// box
		if (map[LEVEL][i][j + 1] == 12)
		{
			// space
			if (map[LEVEL][i][j + 2] == 11)
			{
				map[LEVEL][i][j + 2] = 12;
				map[LEVEL][i][j + 1] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i][j + 2] == 14)
			{
				map[LEVEL][i][j + 2] = 15;
				map[LEVEL][i][j + 1] = 13;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		// box in destination
		if (map[LEVEL][i][j + 1] == 15)
		{
			// space
			if (map[LEVEL][i][j + 2] == 11)
			{
				map[LEVEL][i][j + 2] = 12;
				map[LEVEL][i][j + 1] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}

			// destination
			if (map[LEVEL][i][j + 2] == 14)
			{
				map[LEVEL][i][j + 2] = 15;
				map[LEVEL][i][j + 1] = 16;

				if (map[LEVEL][i][j] == 16)
					map[LEVEL][i][j] = 14;
				else
					map[LEVEL][i][j] = 11;
			}
		}

		break;
	}
}