#include "SLevel.h"

SLevel::SLevel(std::vector<SLayer> _layers) :
	layers(_layers)
{
	tags = std::unordered_set<std::string>({ "level" });
}

SLevel::SLevel(const SLevel& other) :
	layers(other.layers)
{
	tags = other.tags;
	components = other.components;
}

void SLevel::update() {
	for (SLayer& layer : layers) {
		layer.update();
	}

	SComponent::update();
}

void SLevel::draw() {
	for (SLayer& layer : layers) {
		layer.draw();
	}

	SComponent::draw();
}