#include "SGameEngine.h"
#include "SExampleComponent.h"

//======================================\\
// your private member definitions here \\
//======================================\\

// this code is run when an instance of this component is created
void SExampleComponent::start(SExampleComponent& instance) {
	//================\\
	// your code here \\
	//================\\

	// it is required to trigger the SComponent::onStart event after your code
	SComponent::onStart.trigger(instance);
}

// this code is run every frame
void SExampleComponent::update(SExampleComponent& instance) {
	//================\\
	// your code here \\
	//================\\

	// it is required to trigger the SComponent::onUpdate event after your code
	SComponent::onUpdate.trigger(instance);
}

// this code is run every frame, after all game objects have been updated
void SExampleComponent::draw(SExampleComponent& instance) {
	//================\\
	// your code here \\
	//================\\

	// it is required to trigger the SComponent::onDraw event after your code
	SComponent::onDraw.trigger(instance);
}

// this code is run when an instance of this component is destroyed
void SExampleComponent::end(SExampleComponent& instance) {

	// it is required to trigger the SComponent::onEnd event before your code
	SComponent::onEnd.trigger(instance);

	//================\\
	// your code here \\
	//================\\
	
}

//=====================================\\
// your public member definitions here \\
//=====================================\\

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

SExampleComponent::SExampleComponent() {
	// define at least one unique tag for your component for easy identification
	tags = std::unordered_set<std::string>({ "example component" });

	// triggering the onStart event is necessary for all constructors
	onStart.trigger(*this);
}

SExampleComponent::SExampleComponent(const SExampleComponent& other) {
	tags = other.tags;
	onStart.trigger(*this);
}