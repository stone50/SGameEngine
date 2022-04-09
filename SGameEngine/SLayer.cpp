#include "SLayer.h"

SLayer::SLayer(std::vector<SComponent> _gameObjects) :
	gameObjects(_gameObjects)
{
	tags = std::unordered_set<std::string>({ "layer" });
}

SLayer::SLayer(const SLayer& other) :
	gameObjects(other.gameObjects)
{
	tags = other.tags;
	components = other.components;
}

void SLayer::update() {
	for (SComponent& gameObject : gameObjects) {
		gameObject.update();
	}

	SComponent::update();
}

void SLayer::draw() {
	for (SComponent& gameObject : gameObjects) {
		gameObject.draw();
	}

	SComponent::draw();
}