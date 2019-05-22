#include "AllHead.hpp"
#include "SetMap.hpp"
#include "Map_One.hpp"
#include "Map_Tow.hpp"

// EXIT
extern int EXIT;

// quit
extern int quit;

// Set Window Position
extern void WindowPosition();

// Level
extern void GenerateLevel();

// Set home page
extern void HomePageKeys();

// ContinueGameW
extern void ContinueGameW();

// ContinueGameR
extern void ContinueGameR();

int main()
{
	// Set title
	SetConsoleTitle("Sokoban");

	// Set window size
	// system("mode con cols=26 lines=12");

	// Set Window Position
	WindowPosition();
	
	// Set Window size
    initgraph(47*14, 47*16);

	// Set home page
	HomePageKeys();

	// quit
	if (quit)
	{
		// Close map
		closegraph();
		return 0;
	}

	// Run game in while()
	while (true)
	{
		// Set map
		LoadResource();

		// Level
		GenerateLevel();

		// EXIT
		if (EXIT)
		{
			// ContinueGameW
			ContinueGameW();
			HomePageKeys();
			// quit
			if (quit)
			{
				// Close map
				closegraph();
				return 0;
			}
			EXIT = 0;
		}
	}

	// ContinueGameW
	ContinueGameW();

	char ch = _getch();

	// Close map
	closegraph();

	return 0;
}