#pragma once

#include "SGameEngine.h"

class SExampleComponent : public SComponent {
private:
	// example private member
	int health;

	// these functions define the default behavior of your component
	static void start(SExampleComponent& instance);

	static void update(SExampleComponent& instance);

	static void draw(SExampleComponent& instance);

	static void end(SExampleComponent& instance);

public:
	// example public member
	void takeDamage(int damage);

	static void onStart(SComponent* instance);

	static std::unique_ptr<SComponent> createComponent(std::unordered_set<std::string> _tags = std::unordered_set<std::string>());

	// these constructors can be customized
	SExampleComponent();
	SExampleComponent(const SExampleComponent& other);
};