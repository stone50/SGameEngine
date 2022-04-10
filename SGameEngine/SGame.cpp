#include "SGame.h"

void SGame::start() {
	SLevel::onStart.trigger(levels[0]);
}

void SGame::update() {
	SLevel::onUpdate.trigger(levels[levelIndex]);
}

void SGame::draw() {
	SLevel::onDraw.trigger(levels[levelIndex]);
}

void SGame::end() {
	SLevel::onEnd.trigger(levels[levelIndex]);
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

int SGame::getLevelIndex() {
	return levelIndex;
}

void SGame::setLevelIndex(int _levelIndex) {
	SLevel::onEnd.trigger(levels[levelIndex]);
	levelIndex = _levelIndex;
	SLevel::onStart.trigger(levels[levelIndex]);
}