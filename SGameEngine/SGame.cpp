#include "SGame.h"

void SGame::start() {
	//TODO
}

void SGame::update() {
	//TODO
}

void SGame::draw() {
	//TODO
}

void SGame::end() {
	//TODO
}

std::vector<SLevel> SGame::levels = std::vector<SLevel>({ SLevel() });
int SGame::levelIndex = 0;

SEvent SGame::onStart = SEvent(std::vector<void(*)()>({
	start
	}));

SEvent SGame::onUpdate = SEvent(std::vector<void(*)()>({
	update
	}));

SEvent SGame::onDraw = SEvent(std::vector<void(*)()>({
	draw
	}));

SEvent SGame::onEnd = SEvent(std::vector<void(*)()>({
	end
	}));