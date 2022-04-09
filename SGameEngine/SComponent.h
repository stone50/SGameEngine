#pragma once

#include <string>
#include <vector>

#include "SSearchOptions.h"

class SComponent {
public:
	std::unordered_set<std::string> tags;
	std::vector<SComponent> components;

	SComponent(
		std::unordered_set<std::string> _tags = std::unordered_set<std::string>({ "component" }),
		std::vector<SComponent> _components = std::vector<SComponent>()
	);
	SComponent(const SComponent& other);

	void findComponentsByTag(std::vector<SComponent*>* _components, const SSearchOptions& searchOptions = SSearchOptions());

	void update();

	void draw();

};