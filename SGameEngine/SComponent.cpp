#include "SComponent.h"

void SComponent::update(SComponent& instance) {
	for (SComponent& component : instance.components) {
		SComponent::onUpdate.trigger(instance);
	}
}

void SComponent::draw(SComponent& instance) {
	for (SComponent& component : instance.components) {
		SComponent::onDraw.trigger(instance);
	}
}

void SComponent::end(SComponent& instance) {
	//TODO
}

SComponentEvent<SComponent> SComponent::onStart = SComponentEvent<SComponent>();

SComponentEvent<SComponent> SComponent::onUpdate = SComponentEvent<SComponent>(std::vector<void(*)(SComponent&)>({
	update
	}));

SComponentEvent<SComponent> SComponent::onDraw = SComponentEvent<SComponent>(std::vector<void(*)(SComponent&)>({
	draw
	}));

SComponentEvent<SComponent> SComponent::onEnd = SComponentEvent<SComponent>(std::vector<void(*)(SComponent&)>({
	end
	}));

SComponent::SComponent(std::unordered_set<std::string> _tags, std::vector<SComponent> _components) :
	tags(_tags),
	components(_components),
	parentComponent(nullptr)
{
	onStart.trigger(*this);
}
SComponent::SComponent(const SComponent& other) :
	tags(other.tags),
	components(other.components),
	parentComponent(nullptr)
{
	onStart.trigger(*this);
}

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

void SComponent::addComponent(SComponent component) {
	component.parentComponent = this;
	components.push_back(component);
}

void SComponent::removeComponent(SComponent* component) {
	for (int i = 0; i < components.size(); i++) {
		if (&components[i] == component) {
			component[i].parentComponent = nullptr;
			components.erase(components.begin() + i);
			break;
		}
	}
}