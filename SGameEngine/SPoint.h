#pragma once

#include "SComponent.h"

class SPoint : public SComponent {
public:
	double x;
	double y;

	SPoint(double _x = 0, double _y = 0);
	SPoint(const SPoint& other);

	SPoint& operator=(const SPoint& other);

	const SPoint operator+(const SPoint& other);
	SPoint operator+(double delta);

	SPoint operator-(const SPoint& other);
	SPoint operator-(double delta);

	SPoint operator*(const SPoint& other);
	SPoint operator*(double delta);

	SPoint operator/(const SPoint& other);
	SPoint operator/(double delta);

	SPoint operator%(const SPoint& other);
	SPoint operator%(double delta);

	SPoint& operator+=(const SPoint& other);
	SPoint& operator+=(double delta);

	SPoint& operator-=(const SPoint& other);
	SPoint& operator-=(double delta);

	SPoint& operator*=(const SPoint& other);
	SPoint& operator*=(double delta);

	SPoint& operator/=(const SPoint& other);
	SPoint& operator/=(double delta);

	SPoint& operator%=(const SPoint& other);
	SPoint& operator%=(double delta);

	bool operator==(const SPoint& other);

	bool operator!=(const SPoint& other);
};