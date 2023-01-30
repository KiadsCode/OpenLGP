#pragma once
#include "KeyboardState.h"

namespace OpenLGP
{
	public ref class Keyboard
	{
	public:
		static KeyboardState^ GetState();
	};
}