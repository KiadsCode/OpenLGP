#pragma once

namespace OpenLGP
{
	/// <summary>
	/// Description of Vector2.
	/// </summary>
	public ref class Vector2
	{
	public:
		float X, Y;

		static Vector2^ Lerp(Vector2^ a, Vector2^ b, float c);

		static Vector2^ Up()
		{
			return gcnew Vector2(0, -1);
		}
		static Vector2^ Down()
		{
			return gcnew Vector2(0, 1);
		}
		static Vector2^ Left()
		{
			return gcnew Vector2(-1, 0);
		}
		static Vector2^ Right()
		{
			return gcnew Vector2(1, 0);
		}

		void Subtract(Vector2^ b);
		void Add(Vector2^ b);
		static Vector2^ Zero();
		static Vector2^ MoveTowards(Vector2^ a, Vector2^ b, float c);
		Vector2(float x, float y);
	};
}