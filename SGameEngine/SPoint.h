#pragma once

#include "SComponent.h"

class SPoint : public SComponent {
private:
	static void end(SPoint& instance);

public:
	double x;
	double y;
	static SComponentEvent<SPoint> onStart;
	static SComponentEvent<SPoint> onUpdate;
	static SComponentEvent<SPoint> onDraw;
	static SComponentEvent<SPoint> onEnd;

	SPoint(double _x = 0, double _y = 0);
	SPoint(const SPoint& other);

	SPoint& operator=(const SPoint& other);

	SPoint operator+(const SPoint& other);
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