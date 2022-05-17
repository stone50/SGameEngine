#pragma once

class SLevel {
private:

public:
	std::vector<SLayer*> layers;

	SLevel(const std::vector<SLayer>& _layers = std::vector<SLayer>());
	SLevel(const SLevel& other);
};