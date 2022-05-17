#pragma once

class SSprite {
private:
	
public:
	std::vector<SImage> images;
	double animationSpeed;
	unsigned int imageIndex;
	double frameDelay;
	std::unordered_set<std::string> tags;

	SSprite(const std::vector<SImage>& _images = std::vector<SImage>(), const unsigned int _imageIndex = 0, const double _animationSpeed = 0, const double _frameDelay = 0);
	SSprite(const std::string& filepath, const unsigned int _imageIndex, const double _animationSpeed, const double _frameDelay);
	SSprite(const SSprite& other);

	void update();

	bool loadFromFile(const std::string& filepath);

};