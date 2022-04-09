#pragma once

#include "SLevel.h"

class SGame {
private:
	static int levelIndex;

public:
	static std::vector<SLevel> levels;

	static void update();

	static void draw();

};