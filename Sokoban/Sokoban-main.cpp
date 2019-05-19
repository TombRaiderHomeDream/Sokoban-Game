#include "AllHead.hpp"
#include "SetMap.hpp"

// Set Window Position
extern void WindowPosition();

// Go
extern void Move();

int main()
{
	// Set title
	// SetConsoleTitle("Sokoban");

	// Set window size
	// system("mode con cols=26 lines=12");

	// Set Window Position
	WindowPosition();
	
	// Set Window size
    initgraph(47*14, 47*16);

	// Run game in while()
	while (true)
	{
		// Set map
		LoadResource();
		DrawMap();

		// Go
		Move();
	}

	char ch = _getch();

	// Close map
	closegraph();

	return 0;
}