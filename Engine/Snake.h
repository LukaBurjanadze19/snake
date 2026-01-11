#pragma once

#include "Board.h"
#include <vector>

class Snake
{
public:
	void Draw(Board& brd);
	void Move(const Vei2& delta_loc);
	void InitHead(const Vei2& loc);
private:
	static constexpr Color headColor = Colors::Yellow;
	static constexpr Color bodyColor = Colors::Blue;
	std::vector<Vei2> snake;
};