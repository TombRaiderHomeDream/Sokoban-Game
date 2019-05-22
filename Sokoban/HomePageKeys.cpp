#include "AllHead.hpp"

// Set home page
IMAGE pic;

// Selecte
IMAGE selecte, selecteY;

int x = 173;
int y = 420;

void HomePageKeys()
{
	int count = 0;

	// Enter
	while (true)
	{
		// Set home page
		loadimage(&pic, "Green.png");
		putimage(0, 0, &pic);

		// Selecte: new game
		loadimage(&selecte, "spiderman.png", 40, 40);
		loadimage(&selecteY, "spidermanY.png", 40, 40);
		putimage(x, y, &selecteY, SRCAND);
		putimage(x, y, &selecte, SRCPAINT);
				
		char key;
		key = _getch();

		switch (key)
		{
		case 'W':
		case 'w':
		case 72:
			if (y != 420)
			{
				y -= 40;
			}
			break;

		case 'S':
		case 's':
		case 80:
			if (y != 500)
			{
				y += 40;
			}
			break;

		case 'A':
		case 'a':
		case 75:
			if (y != 420)
			{
				y -= 40;
			}
			break;

		case 'D':
		case 'd':
		case 77:
			if (y != 500)
			{
				y += 40;
			}
			break;

		case 'j':
		case 'J':
		case 13:
			if (y == 420)
			{
				count = 1;
			}
			
			if (y == 460)
			{
				count = 2;
			}

			if (y == 500)
			{
				count = 3;
			}
			break;
		}

		if (count)
			break;
		
	}
}