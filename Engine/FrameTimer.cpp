#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	last = std::chrono::steady_clock::now();
}

float FrameTimer::Mark()
{
	const std::chrono::steady_clock::time_point current = std::chrono::steady_clock::now();
	const std::chrono::duration<float> deltaTime = current - last;
	last = current;
	return deltaTime.count();
}