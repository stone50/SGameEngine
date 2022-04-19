#include "SGameEngine.h"
#include "SExampleComponent.h"

//=====================================\\
// your private member definitions here\\
//=====================================\\

void SExampleComponent::start(SExampleComponent& instance) {
	// this code is run when an instance of this component is created
}

void SExampleComponent::update(SExampleComponent& instance) {
	// this code is run every frame
}

void SExampleComponent::draw(SExampleComponent& instance) {
	// this code is run every frame, after all game objects have been updated
}

void SExampleComponent::end(SExampleComponent& instance) {
	// this code is run when an instance of this component is destroyed
}

//====================================\\
// your public member definitions here\\
//====================================\\

// if you decide not to use the start function, onStart should look like this:
// SComponentEvent<SExampleComponent> SExampleComponent::onStart = SComponentEvent<SExampleComponent>();
SComponentEvent<SExampleComponent> SExampleComponent::onStart = SComponentEvent<SExampleComponent>(std::vector<void(*)(SExampleComponent&)>({
	start
	}));

SComponentEvent<SExampleComponent> SExampleComponent::onUpdate = SComponentEvent<SExampleComponent>(std::vector<void(*)(SExampleComponent&)>({
	update
	}));

SComponentEvent<SExampleComponent> SExampleComponent::onDraw = SComponentEvent<SExampleComponent>(std::vector<void(*)(SExampleComponent&)>({
	draw
	}));

SComponentEvent<SExampleComponent> SExampleComponent::onEnd = SComponentEvent<SExampleComponent>(std::vector<void(*)(SExampleComponent&)>({
	end
	}));

SExampleComponent::SExampleComponent() {}