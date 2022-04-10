#include "SSprite.h"

void SSprite::update(SSprite& instance) {
	//TODO
}

void SSprite::draw(SSprite& instance) {
	//TODO
}

SComponentEvent<SSprite> SSprite::onStart = SComponentEvent<SSprite>(std::vector<void(*)(SSprite&)>());

SComponentEvent<SSprite> SSprite::onUpdate = SComponentEvent<SSprite>(std::vector<void(*)(SSprite&)>({
	update
	}));

SComponentEvent<SSprite> SSprite::onDraw = SComponentEvent<SSprite>(std::vector<void(*)(SSprite&)>({
	draw
	}));

SComponentEvent<SSprite> SSprite::onEnd = SComponentEvent<SSprite>();

SSprite::SSprite() {
	tags = std::unordered_set<std::string>({ "sprite" });
	onStart.trigger(*this);
}
SSprite::SSprite(const SSprite& other)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}