#include "Vei2.h"

Vei2::Vei2(int x, int y)
	:
	x(x),
	y(y)
{
}

Vei2 Vei2::operator+(const Vei2 rhs)
{
	return Vei2(x + rhs.x, y + rhs.y);
}

Vei2& Vei2::operator+=(const Vei2 rhs)
{
	x += rhs.x;
	y += rhs.y;
	return *this;
}