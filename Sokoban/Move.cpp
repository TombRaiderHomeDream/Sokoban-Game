#include "AllHead.hpp"

extern int map[16][14];

// Go
void Move()
{
	int i, j;
	for (i = 0; i < 16; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (map[i][j] == 5 || map[i][j] == 8)
			{
				break;
			}
		}
		if (map[i][j] == 5 || map[i][j] == 8)
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
		if (map[i - 1][j] == 0)
		{
			map[i - 1][j] = 5;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// destination
		if (map[i - 1][j] == 3)
		{
			map[i - 1][j] = 8;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// box
		if (map[i - 1][j] == 4)
		{
			// space
			if (map[i - 2][j] == 0)
			{
				map[i - 2][j] = 4;
				map[i - 1][j] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i - 2][j] == 3)
			{
				map[i - 2][j] = 7;
				map[i - 1][j] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		// box in destination
		if (map[i - 1][j] == 7)
		{
			// space
			if (map[i - 2][j] == 0)
			{
				map[i - 2][j] = 4;
				map[i - 1][j] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i - 2][j] == 3)
			{
				map[i - 2][j] = 7;
				map[i - 1][j] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		break;

		// down
	case 'S':
	case 's':
	case 80:
		// space
		if (map[i + 1][j] == 0)
		{
			map[i + 1][j] = 5;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// destination
		if (map[i + 1][j] == 3)
		{
			map[i + 1][j] = 8;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// box
		if (map[i + 1][j] == 4)
		{
			// space
			if (map[i + 2][j] == 0)
			{
				map[i + 2][j] = 4;
				map[i + 1][j] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i + 2][j] == 3)
			{
				map[i + 2][j] = 7;
				map[i + 1][j] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		// box in destination
		if (map[i + 1][j] == 7)
		{
			// space
			if (map[i + 2][j] == 0)
			{
				map[i + 2][j] = 4;
				map[i + 1][j] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i + 2][j] == 3)
			{
				map[i + 2][j] = 7;
				map[i + 1][j] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		break;

		// left
	case 'A':
	case 'a':
	case 75:
		// space
		if (map[i][j - 1] == 0)
		{
			map[i][j - 1] = 5;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// destination
		if (map[i][j - 1] == 3)
		{
			map[i][j - 1] = 8;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// box
		if (map[i][j - 1] == 4)
		{
			// space
			if (map[i][j - 2] == 0)
			{
				map[i][j - 2] = 4;
				map[i][j - 1] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i][j - 2] == 3)
			{
				map[i][j - 2] = 7;
				map[i][j - 1] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		// box in destination
		if (map[i][j - 1] == 7)
		{
			// space
			if (map[i][j - 2] == 0)
			{
				map[i][j - 2] = 4;
				map[i][j - 1] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i][j - 2] == 3)
			{
				map[i][j - 2] = 7;
				map[i][j - 1] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		break;

		// right
	case 'D':
	case 'd':
	case 77:
		// space
		if (map[i][j + 1] == 0)
		{
			map[i][j + 1] = 5;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// destination
		if (map[i][j + 1] == 3)
		{
			map[i][j + 1] = 8;

			if (map[i][j] == 8)
				map[i][j] = 3;
			else
				map[i][j] = 0;
		}

		// box
		if (map[i][j + 1] == 4)
		{
			// space
			if (map[i][j + 2] == 0)
			{
				map[i][j + 2] = 4;
				map[i][j + 1] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i][j + 2] == 3)
			{
				map[i][j + 2] = 7;
				map[i][j + 1] = 5;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		// box in destination
		if (map[i][j + 1] == 7)
		{
			// space
			if (map[i][j + 2] == 0)
			{
				map[i][j + 2] = 4;
				map[i][j + 1] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}

			// destination
			if (map[i][j + 2] == 3)
			{
				map[i][j + 2] = 7;
				map[i][j + 1] = 8;

				if (map[i][j] == 8)
					map[i][j] = 3;
				else
					map[i][j] = 0;
			}
		}

		break;
	}
}