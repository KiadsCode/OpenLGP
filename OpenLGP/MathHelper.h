#pragma once

#include "Vector2.h"
#include <cmath>
#include "floating_point_to_integer.h"

using namespace System;

namespace OpenLGP
{
	public ref class MathHelper
	{
	public:
		static float Lerp(float a, float b, float k);
		static double DLengthBetweenPoint2D(Vector2 ^a, Vector2 ^b);
		static float FLengthBetweenPoint2D(Vector2 ^a, Vector2 ^b);
		static int ILengthBetweenPoint2D(Vector2 ^a, Vector2 ^b);

		static int ILengthBetweenPoint1D(int a, int b);
		static float FLengthBetweenPoint1D(int a, int b);
		static double DLengthBetweenPoint1D(int a, int b);
		static float Clamp(float value, float min, float max);

		static float Repeat(float t, float length);

		static float MoveTowards(float current, float target, float maxDelta);
	};
}
