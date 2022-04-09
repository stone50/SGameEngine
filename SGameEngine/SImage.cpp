#include "SImage.h"

SImage::SImage(std::vector<std::vector<SColor>> _pixels) :
	pixels(_pixels)
{
	tags = std::unordered_set<std::string>({ "image" });
}
SImage::SImage(const SImage& other) :
	pixels(other.pixels)
{
	tags = other.tags;
	components = other.components;
}