#include "SGameEngine.h"

SGameObject::SGameObject(const SPoint& _position = SPoint(), const SSprite& _sprite = SSprite()) :
	position(_position),
	sprite(_sprite)
{
	tags = std::unordered_set<std::string>({ "game object" });
}
SGameObject::SGameObject(const SGameObject& other) :
	position(other.position),
	sprite(other.sprite)
{
	tags = other.tags;
}

void SGameObject::update(SGameObject& instance) {
	SSprite::update(instance.sprite);
}

void SGameObject::draw(SGameObject& instance) {
	// TODO
}