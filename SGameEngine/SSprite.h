#pragma once

#include "SComponent.h"
#include "SImage.h"

class SSprite : public SComponent {
private:
	double scale;
	double rotation;
	int imageIndex;

	static void update(SSprite& instance);

	static void draw(SSprite& instance);

	static void end(SSprite& instance);

public:
	std::vector<SImage> images;
	static SComponentEvent<SSprite> onStart;
	static SComponentEvent<SSprite> onUpdate;
	static SComponentEvent<SSprite> onDraw;
	static SComponentEvent<SSprite> onEnd;

	SSprite();
	SSprite(const SSprite& other);
};