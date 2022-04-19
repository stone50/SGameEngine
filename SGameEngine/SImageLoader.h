#pragma once

class SImageLoader {
private:
	static std::vector<unsigned char> getFileContents(const std::string& filepath);

	static bool loadBmpFromContents(const std::vector<unsigned char>& fileContents, std::vector<SImage>& frames);

public:
	static bool load(const std::string& filepath, std::vector<SImage>& frames);

	static bool loadBMP(const std::string& filepath, std::vector<SImage>& frames);
};