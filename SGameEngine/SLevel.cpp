#include "SLevel.h"

void SLevel::update(SLevel& instance) {
	for (SLayer& layer : instance.layers) {
		instance.onUpdate.trigger(instance);
	}
}

void SLevel::draw(SLevel& instance) {
	for (SLayer& layer : instance.layers) {
		instance.onDraw.trigger(instance);
	}
}

void SLevel::end(SLevel& instance) {
	//TODO
}

SComponentEvent<SLevel> SLevel::onStart = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>());

SComponentEvent<SLevel> SLevel::onUpdate = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	update
	}));

SComponentEvent<SLevel> SLevel::onDraw = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	draw
	}));

SComponentEvent<SLevel> SLevel::onEnd = SComponentEvent<SLevel>(std::vector<void(*)(SLevel&)>({
	end
	}));

SLevel::SLevel(std::vector<SLayer> _layers) :
	layers(_layers)
{
	tags = std::unordered_set<std::string>({ "level" });
	onStart.trigger(*this);
}

SLevel::SLevel(const SLevel& other) :
	layers(other.layers)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}