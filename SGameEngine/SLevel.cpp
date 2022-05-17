#include "SGameEngine.h"

void SLevel::start(SLevel& instance) {
	for (SLayer& layer : instance.layers) {
		SLayer::onStart.trigger(layer);
	}

	SComponent::onStart.trigger(instance);
}

void SLevel::update(SLevel& instance) {
	for (SLayer& layer : instance.layers) {
		SLayer::onUpdate.trigger(layer);
	}

	SComponent::onUpdate.trigger(instance);
}

void SLevel::draw(SLevel& instance) {
	for (SLayer& layer : instance.layers) {
		SLayer::onDraw.trigger(layer);
	}

	SComponent::onDraw.trigger(instance);
}

void SLevel::end(SLevel& instance) {
	SComponent::onEnd.trigger(instance);

	for (SLayer& layer : instance.layers) {
		SLayer::onEnd.trigger(layer);
	}
}

SComponentEvent<SLevel> SLevel::onStart = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	start
	}));

SComponentEvent<SLevel> SLevel::onUpdate = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	update
	}));

SComponentEvent<SLevel> SLevel::onDraw = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	draw
	}));

SComponentEvent<SLevel> SLevel::onEnd = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	end
	}));

SLevel::SLevel(const std::vector<SLayer>& _layers) :
	layers(_layers)
{
	tags = std::unordered_set<std::string>({ "level" });
	onStart.trigger(*this);
}

SLevel::SLevel(const SLevel& other) :
	layers(other.layers)
{
	tags = other.tags;
	onStart.trigger(*this);
}