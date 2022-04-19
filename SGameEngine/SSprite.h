#pragma once

class SSprite : public SComponent {
private:
	int imageIndex;
	double scale;
	double rotation;

	static void update(SSprite& instance);

	static void draw(SSprite& instance);

public:
	std::vector<SImage> images;
	static SComponentEvent<SSprite> onStart;
	static SComponentEvent<SSprite> onUpdate;
	static SComponentEvent<SSprite> onDraw;
	static SComponentEvent<SSprite> onEnd;

	SSprite(const std::vector<SImage>& _images = std::vector<SImage>(), int _imageIndex = 0, double _scale = 1, double _rotation = 0);
	SSprite(std::string filepath);
	SSprite(const SSprite& other);

	bool loadFromFile(std::string filepath);
};