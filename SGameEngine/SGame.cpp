#include "SGame.h"

std::vector<SLevel> SGame::levels = std::vector<SLevel>({ SLevel() });
int SGame::levelIndex = 0;

void SGame::update() {
	levels[levelIndex].update();
}

void SGame::draw() {
	levels[levelIndex].draw();
}