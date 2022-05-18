#pragma once

#include "SGameEngine.h"

class SGameObject : public SComponent {
private:

public:
	SPoint position;
	SSprite sprite;

	SGameObject(const SPoint& _position = SPoint(), const SSprite& _sprite = SSprite());
	SGameObject(const SGameObject& other);

	static void update(SGameObject& instance);
	static void draw(SGameObject& instance);
};