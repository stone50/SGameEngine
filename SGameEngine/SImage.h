#pragma once

#include "SComponent.h"
#include "SColor.h"

class SImage : public SComponent {
public:
	std::vector<std::vector<SColor>> pixels;

	SImage(std::vector<std::vector<SColor>> _pixels = std::vector<std::vector<SColor>>());
	SImage(const SImage& other);
};