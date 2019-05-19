#include "AllHead.hpp"

void WindowPosition()
{
	char title[100];
	HWND hwnd;
	GetConsoleTitle(title, 100);
	hwnd = FindWindow(NULL, title);
	MoveWindow(hwnd, 0, 0, 0, 0, TRUE);
}