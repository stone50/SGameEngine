#include "SGameEngine.h"

SComponent::~SComponent() {
	tags.~unordered_set<std::string>();
}