#include "SImage.h"

void SImage::end(SImage& instance) {
	//TODO
}

SComponentEvent<SImage> SImage::onStart = SComponentEvent<SImage>();

SComponentEvent<SImage> SImage::onUpdate = SComponentEvent<SImage>();

SComponentEvent<SImage> SImage::onDraw = SComponentEvent<SImage>();

SComponentEvent<SImage> SImage::onEnd = SComponentEvent<SImage>(std::vector<void(*)(SImage&)>({
	end
	}));

SImage::SImage(std::vector<std::vector<SColor>> _pixels) :
	pixels(_pixels)
{
	tags = std::unordered_set<std::string>({ "image" });
	onStart.trigger(*this);
}
SImage::SImage(const SImage& other) :
	pixels(other.pixels)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}

void SImage::loadFromFile(std::string filepath) {
	//TODO
}