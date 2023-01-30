#include "MathHelper.h"

namespace OpenLGP
{

	float MathHelper::Lerp(float a, float b, float k)
	{
		float result = a * (1 - k) + b * k;

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

	double MathHelper::DLengthBetweenPoint2D(Vector2 ^a, Vector2 ^b)
	{
		double result = Math::Sqrt(Math::Pow(b->X - a->X, 2) + Math::Pow(b->Y - a->Y, 2));
		return result;
	}

	float MathHelper::FLengthBetweenPoint2D(Vector2 ^a, Vector2 ^b)
	{
		double rawResult = std::sqrt(std::pow(b->X - a->X, 2) + std::pow(b->Y - a->Y, 2));
		float result = static_cast<float>(rawResult);
		return result;
	}

	int MathHelper::ILengthBetweenPoint2D(Vector2 ^a, Vector2 ^b)
	{
		double rawResult = std::sqrt(std::pow(b->X - a->X, 2) + std::pow(b->Y - a->Y, 2));
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
		bool flag = value < min;
		if (flag)
		{
			value = min;
		}
		else
		{
			bool flag2 = value > max;
			if (flag2)
			{
				value = max;
			}
		}
		return value;
	}

	float MathHelper::Repeat(float t, float length)
	{
		return Clamp(t - static_cast<float>(std::floor(t / length)) * length, 0.0f, length);
	}

	float MathHelper::MoveTowards(float current, float target, float maxDelta)
	{
		bool flag = std::abs(target - current) <= maxDelta;
		float result;
		if (flag)
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
