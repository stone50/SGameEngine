#include "SGameEngine.h"

SComponentEvent<SColor> SColor::onStart = SComponentEvent<SColor>();

SComponentEvent<SColor> SColor::onUpdate = SComponentEvent<SColor>();

SComponentEvent<SColor> SColor::onDraw = SComponentEvent<SColor>();

SComponentEvent<SColor> SColor::onEnd = SComponentEvent<SColor>();

SColor::SColor(unsigned char _red, unsigned char _green, unsigned char _blue, double _alpha) :
	red(_red),
	green(_green),
	blue(_blue),
	alpha(_alpha)
{
	tags = std::unordered_set<std::string>({ "color" });
	onStart.trigger(*this);
}
SColor::SColor(const SColor& other) :
	red(other.red),
	green(other.green),
	blue(other.blue),
	alpha(other.alpha)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}

SColor SColor::over(const SColor& other) {
	double temp = other.alpha * (1 - alpha);
	double a = alpha + temp;
	return SColor(
		(char)(((red * alpha) + (other.red * temp)) / a),
		(char)(((green * alpha) + (other.green * temp)) / a),
		(char)(((blue * alpha) + (other.blue * temp)) / a),
		a
	);
}