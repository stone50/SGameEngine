#include <algorithm>

#include "SColor.h"

SColor::SColor(char _red, char _green, char _blue, double _alpha) :
	red(_red),
	green(_green),
	blue(_blue),
	alpha(std::clamp(_alpha, 0.0, 1.0))
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
	components = other.components;
}

double SColor::getAlpha() {
	return alpha;
}

void SColor::setAlpha(double _alpha) {
	alpha = std::clamp(_alpha, 0.0, 1.0);
}