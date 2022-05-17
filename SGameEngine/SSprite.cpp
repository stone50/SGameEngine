#include "SGameEngine.h"

SSprite::SSprite(const std::vector<SImage>& _images, const unsigned int _imageIndex, const double _animationSpeed, const double _frameDelay) :
	images(_images),
	imageIndex(_imageIndex),
	animationSpeed(_animationSpeed),
	frameDelay(_frameDelay)
{
	tags = std::unordered_set<std::string>({ "sprite" });
}
SSprite::SSprite(const std::string& filepath, const unsigned int _imageIndex, const double _animationSpeed, const double _frameDelay) :
	images(std::vector<SImage>()),
	imageIndex(_imageIndex),
	animationSpeed(_animationSpeed),
	frameDelay(_frameDelay)
{
	loadFromFile(filepath);
	tags = std::unordered_set<std::string>({ "sprite" });
}
SSprite::SSprite(const SSprite& other) :
	images(other.images),
	imageIndex(other.imageIndex),
	animationSpeed(other.animationSpeed),
	frameDelay(other.frameDelay)
{
	tags = other.tags;
}

void SSprite::update() {
	// TODO
}

bool SSprite::loadFromFile(const std::string& filepath) {
	return SImageLoader::load(filepath, images);
}