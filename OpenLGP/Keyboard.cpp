#include "Keyboard.h"

namespace OpenLGP
{
	KeyboardState ^Keyboard::GetState()
	{
		return gcnew KeyboardState();
	}
}