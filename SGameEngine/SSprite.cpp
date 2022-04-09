#include "SSprite.h"

SSprite::SSprite() {
	this->tags = std::unordered_set<std::string>({"sprite"});
}
SSprite::SSprite(const SSprite& other)
{
	this->tags = other.tags;
	this->components = other.components;
}

void SSprite::update() {
	// update self

	SComponent::update();
}

void SSprite::draw() {
	// draw self

	SComponent::draw();
}