#include "Vector2.h"
#include "MathHelper.h"

namespace OpenLGP
{
	Vector2 ^Vector2::Lerp(Vector2 ^a, Vector2 ^b, float c)
	{
		Vector2 ^result = Vector2::Zero();
		result->X = MathHelper::Lerp(a->X, b->X, c);
		result->Y = MathHelper::Lerp(a->Y, b->Y, c);
		return result;
	}

	void Vector2::Add(Vector2^ b)
	{
		X += b->X;
		Y += b->Y;
	}
	void Vector2::Subtract(Vector2^ b)
	{
		X -= b->X;
		Y -= b->Y;
	}

	Vector2 ^Vector2::Zero()
	{
		return gcnew Vector2(0, 0);
	}

	Vector2 ^Vector2::MoveTowards(Vector2^ a, Vector2^ b, float c)
	{
		Vector2^ result = Vector2::Zero();
		result->X = MathHelper::MoveTowards(a->X, b->X, c);
		result->Y = MathHelper::MoveTowards(a->Y, b->Y, c);
		return result;
	}

	Vector2::Vector2(float x, float y)
	{
		X = x;
		Y = y;
	}
}
