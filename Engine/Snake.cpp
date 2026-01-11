#include "Snake.h"
#include <assert.h>

void Snake::Draw(Board& brd)
{	
	for (int i = 1; i < snake.size(); i++)
	{
		const Vei2 loc = snake[i];
		brd.DrawCell(loc, bodyColor);
	}

	brd.DrawCell(snake[0], headColor);
}

void Snake::Move(const Vei2& delta_loc)
{	
	assert(abs(delta_loc.x) + abs(delta_loc.y) == 1);
	// move body
	for (size_t i = snake.size() - 1; i > 0; --i)
	{
		snake[i] = snake[i - 1];
	}
	// move head
	snake[0] += delta_loc;
}

void Snake::InitHead(const Vei2& loc)
{
	snake.push_back(loc);
}