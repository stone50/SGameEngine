#pragma once

#include <vector>

class SEvent {
public:
	std::vector<void(*)()> handlers;

	SEvent(std::vector<void(*)()> _handlers = std::vector<void(*)()>());
	SEvent(const SEvent& other);

	void trigger();
};