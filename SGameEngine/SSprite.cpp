#include "SGameEngine.h"

void SSprite::update(SSprite& instance) {
	//TODO
}

void SSprite::draw(SSprite& instance) {
	//TODO
}

SComponentEvent<SSprite> SSprite::onStart = SComponentEvent<SSprite>();

SComponentEvent<SSprite> SSprite::onUpdate = SComponentEvent<SSprite>(std::vector<void(*)(SSprite&)>({
	update
	}));

SComponentEvent<SSprite> SSprite::onDraw = SComponentEvent<SSprite>(std::vector<void(*)(SSprite&)>({
	draw
	}));

SComponentEvent<SSprite> SSprite::onEnd = SComponentEvent<SSprite>();

SSprite::SSprite(const std::vector<SImage>& _images, int _imageIndex, double _scale, double _rotation) :
	images(_images),
	imageIndex(_imageIndex % _images.size()),
	scale(_scale),
	rotation(_rotation)
{
	tags = std::unordered_set<std::string>({ "sprite" });
	onStart.trigger(*this);
}
SSprite::SSprite(std::string filepath) :
	imageIndex(0),
	scale(1),
	rotation(0)
{
	loadFromFile(filepath);
	tags = std::unordered_set<std::string>({ "sprite" });
	onStart.trigger(*this);
}
SSprite::SSprite(const SSprite& other) :
	images(other.images)
{
	tags = other.tags;
	components = other.components;
	onStart.trigger(*this);
}

bool SSprite::loadFromFile(std::string filepath) {
	return SImageLoader::load(filepath, images);
}