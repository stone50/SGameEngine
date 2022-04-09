#include "SGame.h"

std::vector<SLevel> SGame::levels = std::vector<SLevel>({SLevel()});
int SGame::currentLevelIndex = 0;

void SGame::update() {
	levels[currentLevelIndex].update();
}

void SGame::draw() {
	levels[currentLevelIndex].draw();
}