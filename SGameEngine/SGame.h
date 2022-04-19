#pragma once

class SGame {
private:
	static int levelIndex;

	static void start();

	static void update();

	static void draw();

	static void end();

public:
	static std::vector<SLevel> levels;
	static SEvent onStart;
	static SEvent onUpdate;
	static SEvent onDraw;
	static SEvent onEnd;

	static int getLevelIndex();

	static void setLevelIndex(int _levelIndex);

};