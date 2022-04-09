#pragma once

#include "SComponent.h"
#include "SImage.h"

class SSprite : public SComponent {
private:
	double scale;
	double rotation;
	int imageIndex;

public:
	std::vector<SImage> images;

	SSprite();
	SSprite(const SSprite& other);

	void update();

	void draw();
};