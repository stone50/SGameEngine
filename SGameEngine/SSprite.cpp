#include "SSprite.h"

SSprite::SSprite() {
	tags = std::unordered_set<std::string>({ "sprite" });
}
SSprite::SSprite(const SSprite& other)
{
	tags = other.tags;
	components = other.components;
}

void SSprite::update() {
	// update self

	SComponent::update();
}

void SSprite::draw() {
	// draw self

	SComponent::draw();
}