#pragma once

class SImage : public SComponent {
private:
	static void end(SImage& instance);

public:
	std::vector<std::vector<SColor>> pixels;
	static SComponentEvent<SImage> onStart;
	static SComponentEvent<SImage> onUpdate;
	static SComponentEvent<SImage> onDraw;
	static SComponentEvent<SImage> onEnd;

	SImage(std::vector<std::vector<SColor>> _pixels = std::vector<std::vector<SColor>>());
	SImage(const SImage& other);

};