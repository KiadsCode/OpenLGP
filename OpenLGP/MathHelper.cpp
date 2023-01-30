#include "MathHelper.h"

namespace OpenLGP
{

	float MathHelper::Lerp(float a, float b, float c)
	{
		float result = a * (1 - c) + b * c;

		if (result >= b)
		{
			result = b;
		}
		else if (result <= a)
		{
			result = a;
		}

		return result;
	}

	double MathHelper::DLengthBetweenPoint2D(Vector2^ a, Vector2^ b)
	{
		double result = Math::Sqrt(Math::Pow(b->X - a->X, 2) + Math::Pow(b->Y - a->Y, 2));
		return result;
	}

	float MathHelper::FLengthBetweenPoint2D(Vector2^ a, Vector2^ b)
	{
		double rawResult = Math::Sqrt(Math::Pow(b->X - a->X, 2) + Math::Pow(b->Y - a->Y, 2));
		float result = static_cast<float>(rawResult);
		return result;
	}

	int MathHelper::ILengthBetweenPoint2D(Vector2^ a, Vector2^ b)
	{
		double rawResult = Math::Sqrt(Math::Pow(b->X - a->X, 2) + Math::Pow(b->Y - a->Y, 2));
		int result = FloatingPointToInteger::ToInt32(rawResult);
		return result;
	}

	int MathHelper::ILengthBetweenPoint1D(int a, int b)
	{
		double rawResult = Math::Sqrt(Math::Pow(b - a, 2));
		int result = FloatingPointToInteger::ToInt32(rawResult);
		return result;
	}

	float MathHelper::FLengthBetweenPoint1D(int a, int b)
	{
		double rawResult = Math::Sqrt(Math::Pow(b - a, 2));
		float result = static_cast<float>(rawResult);
		return result;
	}

	double MathHelper::DLengthBetweenPoint1D(int a, int b)
	{
		double result = Math::Sqrt(Math::Pow(b - a, 2));
		return result;
	}

	float MathHelper::Clamp(float value, float min, float max)
	{
		if (value < min)
		{
			value = min;
		}
		else
		{
			if (value > max)
			{
				value = max;
			}
		}
		return value;
	}

	float MathHelper::Repeat(float t, float length)
	{
		return Clamp(t - static_cast<float>(Math::Floor(t / length)) * length, 0.0f, length);
	}

	float MathHelper::MoveTowards(float current, float target, float maxDelta)
	{
		float result;
		if (Math::Abs(target - current) <= maxDelta)
		{
			result = target;
		}
		else
		{
			result = current + Math::Sign(target - current) * maxDelta;
		}
		return result;
	}
}