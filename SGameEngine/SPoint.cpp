#include <unordered_set>
#include <string>

#include "SPoint.h"

SComponentEvent<SPoint> SPoint::onStart = SComponentEvent<SPoint>();

SComponentEvent<SPoint> SPoint::onUpdate = SComponentEvent<SPoint>();

SComponentEvent<SPoint> SPoint::onDraw = SComponentEvent<SPoint>();

SComponentEvent<SPoint> SPoint::onEnd = SComponentEvent<SPoint>();

SPoint::SPoint(double _x, double _y) :
	x(_x),
	y(_y)
{
	tags = std::unordered_set<std::string>({ "point" });
	onStart.trigger(*this);
}
SPoint::SPoint(const SPoint& other) :
	x(other.x),
	y(other.y)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}

SPoint& SPoint::operator=(const SPoint& other) {
	x = other.x;
	y = other.y;
	return *this;
}

SPoint SPoint::operator+(const SPoint& other) {
	return SPoint(x + other.x, y + other.y);
}
SPoint SPoint::operator+(double delta) {
	return SPoint(x + delta, y + delta);
}

SPoint SPoint::operator-(const SPoint& other) {
	return SPoint(x - other.x, y - other.y);
}
SPoint SPoint::operator-(double delta) {
	return SPoint(x - delta, y - delta);
}

SPoint SPoint::operator*(const SPoint& other) {
	return SPoint(x * other.x, y * other.y);
}
SPoint SPoint::operator*(double delta) {
	return SPoint(x * delta, y * delta);
}

SPoint SPoint::operator/(const SPoint& other) {
	return SPoint(x / other.x, y / other.y);
}
SPoint SPoint::operator/(double delta) {
	return SPoint(x / delta, y / delta);
}

SPoint SPoint::operator%(const SPoint& other) {
	return SPoint((double)fmod(x, other.x), (double)fmod(y, other.y));
}
SPoint SPoint::operator%(double delta) {
	return SPoint((double)fmod(x, delta), (double)fmod(y, delta));
}

SPoint& SPoint::operator+=(const SPoint& other) {
	x += other.x;
	y += other.y;
	return *this;
}
SPoint& SPoint::operator+=(double delta) {
	x += delta;
	y += delta;
	return *this;
}

SPoint& SPoint::operator-=(const SPoint& other) {
	x -= other.x;
	y -= other.y;
	return *this;
}
SPoint& SPoint::operator-=(double delta) {
	x -= delta;
	y -= delta;
	return *this;
}

SPoint& SPoint::operator*=(const SPoint& other) {
	x *= other.x;
	y *= other.y;
	return *this;
}
SPoint& SPoint::operator*=(double delta) {
	x *= delta;
	y *= delta;
	return *this;
}

SPoint& SPoint::operator/=(const SPoint& other) {
	x /= other.x;
	y /= other.y;
	return *this;
}
SPoint& SPoint::operator/=(double delta) {
	x /= delta;
	y /= delta;
	return *this;
}

SPoint& SPoint::operator%=(const SPoint& other) {
	x = (double)fmod(x, other.x);
	y = (double)fmod(y, other.y);
	return *this;
}
SPoint& SPoint::operator%=(double delta) {
	x = (double)fmod(x, delta);
	y = (double)fmod(y, delta);
	return *this;
}

bool SPoint::operator==(const SPoint& other) {
	return (x == other.x) && (y == other.y);
}

bool SPoint::operator!=(const SPoint& other) {
	return (x != other.x) || (y != other.y);
}