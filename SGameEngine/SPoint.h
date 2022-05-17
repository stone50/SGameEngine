#pragma once

class SPoint {
private:

public:
	double x;
	double y;
	std::unordered_set<std::string> tags;

	SPoint& operator=(const SPoint& other);

	SPoint operator+(const SPoint& other);
	SPoint operator+(const double delta);

	SPoint operator-(const SPoint& other);
	SPoint operator-(const double delta);

	SPoint operator*(const SPoint& other);
	SPoint operator*(const double delta);

	SPoint operator/(const SPoint& other);
	SPoint operator/(const double delta);

	SPoint operator%(const SPoint& other);
	SPoint operator%(const double delta);

	SPoint& operator+=(const SPoint& other);
	SPoint& operator+=(const double delta);

	SPoint& operator-=(const SPoint& other);
	SPoint& operator-=(double delta);

	SPoint& operator*=(const SPoint& other);
	SPoint& operator*=(const double delta);

	SPoint& operator/=(const SPoint& other);
	SPoint& operator/=(const double delta);

	SPoint& operator%=(const SPoint& other);
	SPoint& operator%=(const double delta);

	bool operator==(const SPoint& other);

	bool operator!=(const SPoint& other);

	SPoint(const double _x = 0, const double _y = 0);
	SPoint(const SPoint& other);
};