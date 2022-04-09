#pragma once

#include "SComponent.h"
#include "SLayer.h"

class SLevel : public SComponent {
public:
	std::vector<SLayer> layers;

	SLevel(std::vector<SLayer> _layers = std::vector<SLayer>());
	SLevel(const SLevel& other);

	void update();

	void draw();
};