#include <unordered_set>
#include <string>

#include "SPoint.h"

template<class T>
SPoint<T>::SPoint(T _x, T _y) :
	x(_x),
	y(_y)
{
	this->tags = std::unordered_set<std::string>({"point"});
}
template<class T>
SPoint<T>::SPoint(const SPoint<T>& other) :
	x(other.x),
	y(other.y)
{
	this->tags = other.tags;
	this->components = other.components;
}

template<class T>
SPoint<T>& SPoint<T>::operator=(const SPoint<T>& other) {
	x = other.x;
	y = other.y;
	return *this;
}

template<class T>
 const SPoint<T> SPoint<T>::operator+(const SPoint<T>& other) {
	return SPoint<T>(x + other.x, y + other.y);
}
template<class T>
 SPoint<T> SPoint<T>::operator+(T delta) {
	return SPoint<T>(x + delta, y + delta);
}

template<class T>		  
 SPoint<T> SPoint<T>::operator-(const SPoint<T>& other) {
	return SPoint<T>(x - other.x, y - other.y);
}
template<class T>
 SPoint<T> SPoint<T>::operator-(T delta) {
	return SPoint(x - delta, y - delta);
}

template<class T>		  
SPoint<T> SPoint<T>::operator*(const SPoint<T>& other) {
	return SPoint<T>(x * other.x, y * other.y);
}
template<class T>
SPoint<T> SPoint<T>::operator*(T delta) {
	return SPoint(x * delta, y * delta);
}

template<class T>		  
SPoint<T> SPoint<T>::operator/(const SPoint<T>& other) {
	return SPoint<T>(x / other.x, y / other.y);
}
template<class T>
SPoint<T> SPoint<T>::operator/(T delta) {
	return SPoint<T>(x / delta, y / delta);
}

template<class T>		  
SPoint<T> SPoint<T>::operator%(const SPoint<T>& other) {
	return SPoint<T>((T)fmod(x, other.x), (T)fmod(y, other.y));
}
template<class T>
SPoint<T> SPoint<T>::operator%(T delta) {
	return SPoint<T>((T)fmod(x, delta), (T)fmod(y, delta));
}
	
template<class T>	 
SPoint<T>& SPoint<T>::operator+=(const SPoint<T>& other) {
	x += other.x;
	y += other.y;
	return *this;
}
template<class T>
SPoint<T>& SPoint<T>::operator+=(T delta) {
	x += delta;
	y += delta;
	return *this;
}

template<class T>		  
SPoint<T>& SPoint<T>::operator-=(const SPoint<T>& other) {
	x -= other.x;
	y -= other.y;
	return *this;
}
template<class T>
SPoint<T>& SPoint<T>::operator-=(T delta) {
	x -= delta;
	y -= delta;
	return *this;
}

template<class T>		  
SPoint<T>& SPoint<T>::operator*=(const SPoint<T>& other) {
	x *= other.x;
	y *= other.y;
	return *this;
}
template<class T>
SPoint<T>& SPoint<T>::operator*=(T delta) {
	x *= delta;
	y *= delta;
	return *this;
}

template<class T>		  
SPoint<T>& SPoint<T>::operator/=(const SPoint<T>& other) {
	x /= other.x;
	y /= other.y;
	return *this;
}
template<class T>
SPoint<T>& SPoint<T>::operator/=(T delta) {
	x /= delta;
	y /= delta;
	return *this;
}

template<class T>
SPoint<T>& SPoint<T>::operator%=(const SPoint<T>& other) {
	x = (T)fmod(x, other.x);
	y = (T)fmod(y, other.y);
	return *this;
}
template<class T>
SPoint<T>& SPoint<T>::operator%=(T delta) {
	x = (T)fmod(x, delta);
	y = (T)fmod(y, delta);
	return *this;
}

template<class T>
bool SPoint<T>::operator==(const SPoint<T>& other) {
	return (x == other.x) && (y == other.y);
}

template<class T>
bool SPoint<T>::operator!=(const SPoint<T>& other) {
	return (x != other.x) || (y != other.y);
}

template class SPoint<int>;
template class SPoint<double>;
template class SPoint<float>;