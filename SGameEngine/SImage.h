#pragma once

class SImage : public SComponent {
private:

public:
	std::vector<std::vector<SColor>> pixels;

	SImage(const std::vector<std::vector<SColor>>& _pixels = std::vector<std::vector<SColor>>());
	SImage(const SImage& other);

};