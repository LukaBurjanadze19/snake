#pragma once

class Vei2
{
public:
	Vei2(int x, int y);
	Vei2 operator + (const Vei2 rhs);
	Vei2& operator += (const Vei2 rhs);
public:
	int x;
	int y;
};