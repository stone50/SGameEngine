#pragma once

class SColor : public SComponent {

public:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	double alpha;
	
	static SComponentEvent<SColor> onStart;
	static SComponentEvent<SColor> onUpdate;
	static SComponentEvent<SColor> onDraw;
	static SComponentEvent<SColor> onEnd;

	SColor(unsigned char _red = 0, unsigned char _green = 0, unsigned char _blue = 0, double _alpha = 1);
	SColor(const SColor& other);

	SColor over(const SColor& other);

};