#include "SGameEngine.h"

SEvent::SEvent(std::vector<void(*)()> _handlers) :
	handlers(_handlers)
{}
SEvent::SEvent(const SEvent& other) :
	handlers(other.handlers)
{}

void SEvent::trigger() {
	for (const auto& handler : handlers) {
		handler();
	}
}