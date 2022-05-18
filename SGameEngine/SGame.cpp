#include "SGameEngine.h"

unsigned int SGame::levelIndex = 0;
unsigned int SGame::windowWidth = 1600;
unsigned int SGame::windowHeight = 900;

void SGame::start() {
	
}

void SGame::update() {
	
}

void SGame::draw() {
	
}

void SGame::end() {
	

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
	// TODO
}