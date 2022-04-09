#include "SLevel.h"

SLevel::SLevel(std::vector<SLayer> _layers) :
	layers(_layers)
{}

SLevel::SLevel(const SLevel& other) :
	layers(other.layers)
{}

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