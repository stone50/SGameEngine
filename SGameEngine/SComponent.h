#pragma once

#include <string>
#include <vector>

#include "SSearchOptions.h"
#include "SComponentEvent.h"

class SComponent {
private:
	static void update(SComponent& instance);

	static void draw(SComponent& instance);

	static void end(SComponent& instance);

protected:
	std::vector<SComponent> components;
	SComponent* parentComponent;

public:
	std::unordered_set<std::string> tags;
	static SComponentEvent<SComponent> onStart;
	static SComponentEvent<SComponent> onUpdate;
	static SComponentEvent<SComponent> onDraw;
	static SComponentEvent<SComponent> onEnd;

	SComponent(
		std::unordered_set<std::string> _tags = std::unordered_set<std::string>({ "component" }),
		std::vector<SComponent> _components = std::vector<SComponent>()
	);
	SComponent(const SComponent& other);

	void findComponentsByTag(std::vector<SComponent*>* _components, const SSearchOptions& searchOptions = SSearchOptions());

	void addComponent(SComponent component);

	void removeComponent(SComponent* component);

	void destroy();

};