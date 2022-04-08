#include "SPoint.h"

SPoint::SPoint() :
	x(0),
	y(0)
{}
SPoint::SPoint(float _x, float _y) :
	x(_x),
	y(_y)
{}
SPoint::SPoint(const SPoint& other) :
	x(other.x),
	y(other.y)
{}

SPoint& SPoint::operator=(const SPoint& other) {
	x = other.x;
	y = other.y;
	return *this;
}
		  
SPoint SPoint::operator+(const SPoint& other) {
	return SPoint(x + other.x, y + other.y);
}
SPoint SPoint::operator+(float delta) {
	return SPoint(x + delta, y + delta);
}
		  
SPoint SPoint::operator-(const SPoint& other) {
	return SPoint(x - other.x, y - other.y);
}
SPoint SPoint::operator-(float delta) {
	return SPoint(x - delta, y - delta);
}
		  
SPoint SPoint::operator*(const SPoint& other) {
	return SPoint(x * other.x, y * other.y);
}
SPoint SPoint::operator*(float delta) {
	return SPoint(x * delta, y * delta);
}
		  
SPoint SPoint::operator/(const SPoint& other) {
	return SPoint(x / other.x, y / other.y);
}
SPoint SPoint::operator/(float delta) {
	return SPoint(x / delta, y / delta);
}
		  
SPoint SPoint::operator%(const SPoint& other) {
	return SPoint(fmod(x, other.x), fmod(y, other.y));
}
SPoint SPoint::operator%(float delta) {
	return SPoint(fmod(x, delta), fmod(y, delta));
}
		 
SPoint& SPoint::operator+=(const SPoint& other) {
	x += other.x;
	y += other.y;
	return *this;
}
SPoint& SPoint::operator+=(float delta) {
	x += delta;
	y += delta;
	return *this;
}
		  
SPoint& SPoint::operator-=(const SPoint& other) {
	x -= other.x;
	y -= other.y;
	return *this;
}
SPoint& SPoint::operator-=(float delta) {
	x -= delta;
	y -= delta;
	return *this;
}
		  
SPoint& SPoint::operator*=(const SPoint& other) {
	x *= other.x;
	y *= other.y;
	return *this;
}
SPoint& SPoint::operator*=(float delta) {
	x *= delta;
	y *= delta;
	return *this;
}
		  
SPoint& SPoint::operator/=(const SPoint& other) {
	x /= other.x;
	y /= other.y;
	return *this;
}
SPoint& SPoint::operator/=(float delta) {
	x /= delta;
	y /= delta;
	return *this;
}
		  
SPoint& SPoint::operator%=(const SPoint& other) {
	x = fmod(x, other.x);
	y = fmod(y, other.y);
	return *this;
}
SPoint& SPoint::operator%=(float delta) {
	x = fmod(x, delta);
	y = fmod(y, delta);
	return *this;
}

bool SPoint::operator==(const SPoint& other) {
	return (x == other.x) && (y == other.y);
}

bool SPoint::operator!=(const SPoint& other) {
	return (x != other.x) || (y != other.y);
}