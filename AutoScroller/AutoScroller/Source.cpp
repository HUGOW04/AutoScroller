#include <iostream>
#include <Windows.h>

int main()
{
	while (true)
	{
		Sleep(20);
		mouse_event(MOUSEEVENTF_WHEEL, 0, 0,-1, 0);
	}
}