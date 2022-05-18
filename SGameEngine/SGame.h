#pragma once

class SGame {
private:
	static unsigned int levelIndex;
	static unsigned int windowWidth;
	static unsigned int windowHeight;

public:
	static std::vector<SLevel> levels;
	//static SImage canvas;
	static double FPS;

	static void start();
	static void update();
	static void draw();
	static void end();

	static unsigned int getLevelIndex();

	static void setLevelIndex(const unsigned int _levelIndex);
};