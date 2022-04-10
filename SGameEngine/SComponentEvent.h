#pragma once

#include <vector>

#include "SEvent.h"

template <class T>
class SComponentEvent : SEvent {
public:
	std::vector<void(*)(T&)> handlers;

	SComponentEvent(std::vector<void(*)(T&)> _handlers = std::vector<void(*)(T&)>());
	SComponentEvent(const SComponentEvent& other);

	void trigger(T& instance);
};

template <class T>
SComponentEvent<T>::SComponentEvent(std::vector<void(*)(T&)> _handlers) :
	handlers(_handlers)
{}
template <class T>
SComponentEvent<T>::SComponentEvent(const SComponentEvent<T>& other) :
	handlers(other.handlers)
{}

template <class T>
void SComponentEvent<T>::trigger(T& instance) {
	for (const auto& handler : handlers) {
		handler(instance);
	}
}