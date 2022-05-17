#include "SGameEngine.h"

unsigned int SGame::levelIndex = 0;
unsigned int SGame::windowWidth = 1600;
unsigned int SGame::windowHeight = 900;

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

	levels = std::vector<SLevel>({ SLevel() });
	//canvas = SImage(windowWidth, windowHeight);
}

std::vector<SLevel> SGame::levels = std::vector<SLevel>({ SLevel() });
//SImage SGame::canvas = SImage(windowWidth, windowHeight);
double SGame::FPS = 60;

unsigned int SGame::getLevelIndex() {
	return levelIndex;
}

void SGame::setLevelIndex(const unsigned int _levelIndex) {
	SLevel::onEnd.trigger(levels[levelIndex]);
	levelIndex = _levelIndex;
	SLevel::onStart.trigger(levels[levelIndex]);
}

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