#pragma once

class SImage {
private:

public:
	std::vector<std::vector<SColor>> pixels;
	std::unordered_set<std::string> tags;

	SImage(const std::vector<std::vector<SColor>>& _pixels = std::vector<std::vector<SColor>>());
	SImage(const SImage& other);

};