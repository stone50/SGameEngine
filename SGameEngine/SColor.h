#pragma once

#include "SComponent.h"

class SColor : public SComponent {
private:
	double alpha;

public:
	char red;
	char green;
	char blue;

	SColor(char _red = 0, char _green = 0, char _blue = 0, double _alpha = 1);
	SColor(const SColor& other);

	double getAlpha();

	void setAlpha(double _alpha);
};