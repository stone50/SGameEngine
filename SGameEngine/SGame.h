#pragma once

#include "SLevel.h"

class SGame {
	static std::vector<SLevel> levels;
	static int currentLevelIndex;

public:
	static void update();

	static void draw();
};