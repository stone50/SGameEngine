#include "SComponent.h"

SComponent::SComponent(std::unordered_set<std::string> _tags, std::vector<SComponent> _components) :
	tags(_tags),
	components(_components)
{}
SComponent::SComponent(const SComponent& other) :
	tags(other.tags),
	components(other.components)
{}

void SComponent::findComponentsByTag(std::vector<SComponent*>* _components, const SSearchOptions& searchOptions) {
	for (SComponent& component : components) {
		bool componentGood = true;
		for (const auto& tag : searchOptions.tagsMustInclude) {
			if (!component.tags.count(tag)) {
				componentGood = false;
				break;
			}
		}
		if (componentGood) {
			for (const auto& tag : searchOptions.tagsMustExclude) {
				if (component.tags.count(tag)) {
					componentGood = false;
					break;
				}
			}
			if (componentGood) {
				_components->push_back(&component);
			}
		}
		if (!searchOptions.searchChildrenOnly) {
			component.findComponentsByTag(_components, searchOptions);
		}
	}
}

void SComponent::update() {
	for (SComponent& component : components) {
		component.update();
	}
}

void SComponent::draw() {
	for (SComponent& component : components) {
		component.draw();
	}
}