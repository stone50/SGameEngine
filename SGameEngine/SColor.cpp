#include "SGameEngine.h"

SColor::SColor(const unsigned char _red, const unsigned char _green, const unsigned char _blue, const double _alpha) :
	red(_red),
	green(_green),
	blue(_blue),
	alpha(_alpha)
{
	tags = std::unordered_set<std::string>({ "color" });
}
SColor::SColor(const SColor& other) :
	red(other.red),
	green(other.green),
	blue(other.blue),
	alpha(other.alpha)
{
	tags = other.tags;
}

SColor SColor::over(const SColor& other) {
	double temp = other.alpha * (1 - alpha);
	double a = alpha + temp;
	return SColor(
		(unsigned char)(((red * alpha) + (other.red * temp)) / a),
		(unsigned char)(((green * alpha) + (other.green * temp)) / a),
		(unsigned char)(((blue * alpha) + (other.blue * temp)) / a),
		a
	);
}