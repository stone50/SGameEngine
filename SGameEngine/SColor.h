#pragma once

class SColor : public SComponent {
public:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	double alpha;

	SColor(const unsigned char _red = 0, const unsigned char _green = 0, const unsigned char _blue = 0, const double _alpha = 1);
	SColor(const SColor& other);

	SColor over(const SColor& other);
};