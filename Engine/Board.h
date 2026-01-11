#pragma once

#include "Graphics.h"
#include "Vei2.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Vei2& loc, Color c);
	int GetWidth() const;
	int GetHeight() const;
private:
	static constexpr int dimension = 20;
	int width = 10;
	int height = 10;
	Graphics& gfx;
};