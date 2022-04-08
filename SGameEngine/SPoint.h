#pragma once

#include "SComponent.h"

class SPoint : public SComponent {
public:
	float x;
	float y;

	SPoint();
	SPoint(float _x, float _y);
	SPoint(const SPoint& other);

	SPoint& operator=(const SPoint& other);

	SPoint operator+(const SPoint& other);
	SPoint operator+(float delta);

	SPoint operator-(const SPoint& other);
	SPoint operator-(float delta);

	SPoint operator*(const SPoint& other);
	SPoint operator*(float delta);

	SPoint operator/(const SPoint& other);
	SPoint operator/(float delta);

	SPoint operator%(const SPoint& other);
	SPoint operator%(float delta);

	SPoint& operator+=(const SPoint& other);
	SPoint& operator+=(float delta);

	SPoint& operator-=(const SPoint& other);
	SPoint& operator-=(float delta);

	SPoint& operator*=(const SPoint& other);
	SPoint& operator*=(float delta);

	SPoint& operator/=(const SPoint& other);
	SPoint& operator/=(float delta);

	SPoint& operator%=(const SPoint& other);
	SPoint& operator%=(float delta);

	bool operator==(const SPoint& other);

	bool operator!=(const SPoint& other);
};