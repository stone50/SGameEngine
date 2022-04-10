#include "SLayer.h"

void SLayer::start(SLayer& instance) {
	for (SComponent& gameObject : instance.gameObjects) {
		gameObject.onStart.trigger(gameObject);
	}
}

void SLayer::update(SLayer& instance) {
	for (SComponent& gameObject : instance.gameObjects) {
		gameObject.onUpdate.trigger(gameObject);
	}
}

void SLayer::draw(SLayer& instance) {
	for (SComponent& gameObject : instance.gameObjects) {
		gameObject.onDraw.trigger(gameObject);
	}
}

void SLayer::end(SLayer& instance) {
	for (SComponent& gameObject : instance.gameObjects) {
		gameObject.onEnd.trigger(gameObject);
	}
}

SComponentEvent<SLayer> SLayer::onStart = SComponentEvent<SLayer>(std::vector<void(*)(SLayer&)>());

SComponentEvent<SLayer> SLayer::onUpdate = SComponentEvent<SLayer>(std::vector<void(*)(SLayer&)>({
	update
	}));

SComponentEvent<SLayer> SLayer::onDraw = SComponentEvent<SLayer>(std::vector<void(*)(SLayer&)>({
	draw
	}));

SComponentEvent<SLayer> SLayer::onEnd = SComponentEvent<SLayer>(std::vector<void(*)(SLayer&)>({
	end
	}));

SLayer::SLayer(std::vector<SComponent> _gameObjects) :
	gameObjects(_gameObjects)
{
	tags = std::unordered_set<std::string>({ "layer" });
	onStart.trigger(*this);
}

SLayer::SLayer(const SLayer& other) :
	gameObjects(other.gameObjects)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}