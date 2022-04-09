#pragma once

#include "SComponent.h"

template<class T>
class SPoint : public SComponent {
public:
	T x;
	T y;

	SPoint(T _x = 0, T _y = 0);
	SPoint(const SPoint<T>& other);

	SPoint<T>& operator=(const SPoint<T>& other);

	const SPoint<T> operator+(const SPoint<T>& other);
	SPoint<T> operator+(T delta);

	SPoint<T> operator-(const SPoint<T>& other);
	SPoint<T> operator-(T delta);

	SPoint<T> operator*(const SPoint<T>& other);
	SPoint<T> operator*(T delta);

	SPoint<T> operator/(const SPoint<T>& other);
	SPoint<T> operator/(T delta);

	SPoint<T> operator%(const SPoint<T>& other);
	SPoint<T> operator%(T delta);

	SPoint<T>& operator+=(const SPoint<T>& other);
	SPoint<T>& operator+=(T delta);

	SPoint<T>& operator-=(const SPoint<T>& other);
	SPoint<T>& operator-=(T delta);

	SPoint<T>& operator*=(const SPoint<T>& other);
	SPoint<T>& operator*=(T delta);

	SPoint<T>& operator/=(const SPoint<T>& other);
	SPoint<T>& operator/=(T delta);

	SPoint<T>& operator%=(const SPoint<T>& other);
	SPoint<T>& operator%=(T delta);

	bool operator==(const SPoint<T>& other);

	bool operator!=(const SPoint<T>& other);
};