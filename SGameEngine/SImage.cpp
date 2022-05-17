#include "SGameEngine.h"

SImage::SImage(const std::vector<std::vector<SColor>>& _pixels) :
	pixels(_pixels)
{
	tags = std::unordered_set<std::string>({ "image" });
}
SImage::SImage(const SImage& other) :
	pixels(other.pixels)
{
	tags = other.tags;
}