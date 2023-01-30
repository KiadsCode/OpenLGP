#pragma once
#include "MouseState.h"

namespace OpenLGP
{
	public ref class Mouse
	{
	public:
		static MouseState^ GetState();
		static void SetPosition(int x, int y, int windowPosX, int windowPosY);
	};
}