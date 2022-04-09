#pragma once

#include "SComponent.h"

class SSprite : public SComponent {
public:
	SSprite();
	SSprite(const SSprite& other);

	void update();

	void draw();
};