#include "AllHead.hpp"

void HomePage()
{
	// Set home page
	IMAGE pic;
	loadimage(&pic, "Green.png");
	putimage(0, 0, &pic);
	char ch = _getch();
}