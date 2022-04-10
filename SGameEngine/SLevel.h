#pragma once

#include "SComponent.h"
#include "SLayer.h"

class SLevel : public SComponent {
private:
	static void start(SLevel& instance);

	static void update(SLevel& instance);

	static void draw(SLevel& instance);

	static void end(SLevel& instance);

public:
	std::vector<SLayer> layers;
	static SComponentEvent<SLevel> onStart;
	static SComponentEvent<SLevel> onUpdate;
	static SComponentEvent<SLevel> onDraw;
	static SComponentEvent<SLevel> onEnd;

	SLevel(std::vector<SLayer> _layers = std::vector<SLayer>());
	SLevel(const SLevel& other);

};