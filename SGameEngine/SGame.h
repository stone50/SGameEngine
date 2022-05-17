#pragma once

class SGame {
private:
	static unsigned int levelIndex;
	static unsigned int windowWidth;
	static unsigned int windowHeight;

	static void start();

	static void update();

	static void draw();

	static void end();

public:
	static std::vector<SLevel> levels;
	//static SImage canvas;
	static double FPS;

	static unsigned int getLevelIndex();

	static void setLevelIndex(const unsigned int _levelIndex);
	
	static SEvent onStart;
	static SEvent onUpdate;
	static SEvent onDraw;
	static SEvent onEnd;
};