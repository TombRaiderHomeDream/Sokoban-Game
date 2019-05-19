// Now level
extern int LEVEL;

// Level: 1
extern void DrawMap_One();
extern void Move_One();

// Level: 2
extern void DrawMap_Tow();
extern void Move_Tow();

void GenerateLevel()
{
	if (LEVEL == 0)
	{
		// Set map
		DrawMap_One();

		// Go
		Move_One();
	}

	if (LEVEL == 1)
	{
		// Set map
		DrawMap_Tow();

		// Go
		Move_Tow();
	}
}