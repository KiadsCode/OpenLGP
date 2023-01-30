#include "Mouse.h"

namespace OpenLGP
{
	MouseState^ Mouse::GetState()
	{
		return gcnew MouseState();
	}
	void Mouse::SetPosition(int x, int y, int windowPosX, int windowPosY)
	{
		SetCursorPos(x + windowPosX, y + windowPosY);
	}
}