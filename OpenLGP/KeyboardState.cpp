#include "KeyboardState.h"

namespace OpenLGP
{
	KeyboardState::KeyboardState()
	{
		A = GetAsyncKeyState((int)Keys::A);
		B = GetAsyncKeyState((int)Keys::B);
		C = GetAsyncKeyState((int)Keys::C);
		D = GetAsyncKeyState((int)Keys::D);
		E = GetAsyncKeyState((int)Keys::E);
		F = GetAsyncKeyState((int)Keys::F);
		G = GetAsyncKeyState((int)Keys::G);
		H = GetAsyncKeyState((int)Keys::H);
		I = GetAsyncKeyState((int)Keys::I);
		J = GetAsyncKeyState((int)Keys::J);
		K = GetAsyncKeyState((int)Keys::K);
		L = GetAsyncKeyState((int)Keys::L);
		M = GetAsyncKeyState((int)Keys::M);
		N = GetAsyncKeyState((int)Keys::N);
		O = GetAsyncKeyState((int)Keys::O);
		P = GetAsyncKeyState((int)Keys::P);
		Q = GetAsyncKeyState((int)Keys::Q);
		R = GetAsyncKeyState((int)Keys::R);
		S = GetAsyncKeyState((int)Keys::S);
		T = GetAsyncKeyState((int)Keys::T);
		U = GetAsyncKeyState((int)Keys::U);
		V = GetAsyncKeyState((int)Keys::V);
		W = GetAsyncKeyState((int)Keys::W);
		X = GetAsyncKeyState((int)Keys::X);
		Y = GetAsyncKeyState((int)Keys::Y);
		Z = GetAsyncKeyState((int)Keys::Z);
		Space = GetAsyncKeyState((int)Keys::Space);
		One = GetAsyncKeyState((int)Keys::One);
		Two = GetAsyncKeyState((int)Keys::Two);
		Three = GetAsyncKeyState((int)Keys::Three);
		Four = GetAsyncKeyState((int)Keys::Four);
		Five = GetAsyncKeyState((int)Keys::Five);
		Six = GetAsyncKeyState((int)Keys::Six);
		Seven = GetAsyncKeyState((int)Keys::Seven);
		Eight = GetAsyncKeyState((int)Keys::Eight);
		Nine = GetAsyncKeyState((int)Keys::Nine);
		Zero = GetAsyncKeyState((int)Keys::Zero);
		Plus = GetAsyncKeyState((int)VK_OEM_PLUS);
		Minus = GetAsyncKeyState((int)VK_OEM_MINUS);
		Escape = GetAsyncKeyState((int)VK_ESCAPE);
		Cancel = GetAsyncKeyState((int)VK_CANCEL);
		Enter = GetAsyncKeyState((int)VK_RETURN);
		Shift = GetAsyncKeyState((int)VK_SHIFT);
		Control = GetAsyncKeyState((int)VK_CONTROL);
		CapsLock = GetAsyncKeyState((int)VK_CAPITAL);
		Pause = GetAsyncKeyState((int)VK_PAUSE);
		Alt = GetAsyncKeyState((int)VK_MENU);
		End = GetAsyncKeyState((int)VK_END);
		Insert = GetAsyncKeyState((int)VK_INSERT);
		Delete = GetAsyncKeyState((int)VK_DELETE);
		Down = GetAsyncKeyState((int)VK_DOWN);
		Left = GetAsyncKeyState((int)VK_LEFT);
		Right = GetAsyncKeyState((int)VK_RIGHT);
		Up = GetAsyncKeyState((int)VK_UP);
	}
	bool KeyboardState::IsKeyDown(Keys key)
	{
		switch ((int)key)
		{
		case (int)OpenLGP::Keys::A:
			return A;
			break;
		case (int)OpenLGP::Keys::B:
			return B;
			break;
		case (int)OpenLGP::Keys::C:
			return C;
			break;
		case (int)OpenLGP::Keys::D:
			return D;
			break;
		case (int)OpenLGP::Keys::E:
			return E;
			break;
		case (int)OpenLGP::Keys::F:
			return F;
			break;
		case (int)OpenLGP::Keys::G:
			return G;
			break;
		case (int)OpenLGP::Keys::H:
			return H;
			break;
		case (int)OpenLGP::Keys::I:
			return I;
			break;
		case (int)OpenLGP::Keys::J:
			return J;
			break;
		case (int)OpenLGP::Keys::K:
			return K;
			break;
		case (int)OpenLGP::Keys::L:
			return L;
			break;
		case (int)OpenLGP::Keys::M:
			return M;
			break;
		case (int)OpenLGP::Keys::N:
			return N;
			break;
		case (int)OpenLGP::Keys::O:
			return O;
			break;
		case (int)OpenLGP::Keys::P:
			return P;
			break;
		case (int)OpenLGP::Keys::Q:
			return Q;
			break;
		case (int)OpenLGP::Keys::R:
			return R;
			break;
		case (int)OpenLGP::Keys::S:
			return S;
			break;
		case (int)OpenLGP::Keys::T:
			return T;
			break;
		case (int)OpenLGP::Keys::U:
			return U;
			break;
		case (int)OpenLGP::Keys::V:
			return V;
			break;
		case (int)OpenLGP::Keys::W:
			return W;
			break;
		case (int)OpenLGP::Keys::X:
			return X;
			break;
		case (int)OpenLGP::Keys::Y:
			return Y;
			break;
		case (int)OpenLGP::Keys::Z:
			return Z;
			break;
		case (int)OpenLGP::Keys::One:
			return One;
			break;
		case (int)OpenLGP::Keys::Two:
			return Two;
			break;
		case (int)OpenLGP::Keys::Three:
			return Three;
			break;
		case (int)OpenLGP::Keys::Four:
			return Four;
			break;
		case (int)OpenLGP::Keys::Five:
			return Five;
			break;
		case (int)OpenLGP::Keys::Six:
			return Six;
			break;
		case (int)OpenLGP::Keys::Seven:
			return Seven;
			break;
		case (int)OpenLGP::Keys::Eight:
			return Eight;
			break;
		case (int)OpenLGP::Keys::Nine:
			return Nine;
			break;
		case (int)OpenLGP::Keys::Zero:
			return Zero;
			break;
		case (int)OpenLGP::Keys::Minus:
			return Minus;
			break;
		case (int)OpenLGP::Keys::Plus:
			return Plus;
			break;
		case (int)OpenLGP::Keys::Space:
			return Space;
			break;
		case (int)OpenLGP::Keys::Escape:
			return Escape;
			break;
		case (int)OpenLGP::Keys::Cancel:
			return Cancel;
			break;
		case (int)OpenLGP::Keys::Enter:
			return Enter;
			break;
		case (int)OpenLGP::Keys::Shift:
			return Shift;
			break;
		case (int)OpenLGP::Keys::Control:
			return Control;
			break;
		case (int)OpenLGP::Keys::Pause:
			return Pause;
			break;
		case (int)OpenLGP::Keys::End:
			return End;
			break;
		case (int)OpenLGP::Keys::Insert:
			return Insert;
			break;
		case (int)OpenLGP::Keys::Delete:
			return Delete;
			break;
		case (int)OpenLGP::Keys::Down:
			return Down;
			break;
		case (int)OpenLGP::Keys::Left:
			return Left;
			break;
		case (int)OpenLGP::Keys::Right:
			return Right;
			break;
		case (int)OpenLGP::Keys::Up:
			return Up;
			break;
		default:
			return false;
			break;
		}
		return false;
	}
	bool KeyboardState::IsKeyUp(Keys key)
	{
		return !IsKeyDown(key);
	}
}