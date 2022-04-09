#pragma once

#include "SComponent.h"

class SLayer : public SComponent {
public:
	std::vector<SComponent> gameObjects;

	SLayer(std::vector<SComponent> _gameObjects = std::vector<SComponent>());
	SLayer(const SLayer& other);

	void update();

	void draw();
};