#pragma once

#include <string>
#include <vector>
#include <unordered_set>

class SComponent {
public:
	std::string name;
	std::unordered_set<std::string> tags;
	std::vector<SComponent> components;

};