#pragma once
#include <Windows.h>
#include "Vector2.h"

namespace OpenLGP
{
	public enum class MouseButton : int {
		LeftButton = VK_LBUTTON,
		RightButton = VK_RBUTTON,
		MiddleButton = VK_MBUTTON
	};

	public ref class MouseState
	{
	public:
		bool IsButtonPressed(MouseButton button);
		bool IsButtonReleased(MouseButton button);
		int GetPositionX(int windowPosX);
		int GetPositionY(int windowPosY);
		Vector2 ^GetPosition(int windowPosX, int windowPosY);
		MouseState();
	private:
		bool LeftMouseButton;
		bool RightMouseButton;
		bool MiddleMouseButton;
	};
}