#pragma once

#include "SComponent.h"

class SColor : public SComponent {
private:
	double alpha;

	static void end(SColor& instance);

public:
	char red;
	char green;
	char blue;
	static SComponentEvent<SColor> onStart;
	static SComponentEvent<SColor> onUpdate;
	static SComponentEvent<SColor> onDraw;
	static SComponentEvent<SColor> onEnd;

	SColor(char _red = 0, char _green = 0, char _blue = 0, double _alpha = 1);
	SColor(const SColor& other);

	double getAlpha();

	void setAlpha(double _alpha);

	SColor over(const SColor& other);

};