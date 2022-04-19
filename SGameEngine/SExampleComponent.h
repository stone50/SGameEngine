#pragma once

#include "SGameEngine.h"

class SExampleComponent : public SComponent {
private:
	//===========================\\
	// your private members here \\
	//===========================\\


	// these four functions are optional
	// just be sure to remove them from their respective SComponentEvent in SExampleComponent.cpp if you choose to exclude them
	static void start(SExampleComponent& instance);

	static void update(SExampleComponent& instance);

	static void draw(SExampleComponent& instance);

	static void end(SExampleComponent& instance);

public:
	//==========================\\
	// your public members here \\
	//==========================\\

	// these events store functions and call them when triggered
	static SComponentEvent<SExampleComponent> onStart;
	static SComponentEvent<SExampleComponent> onUpdate;
	static SComponentEvent<SExampleComponent> onDraw;
	static SComponentEvent<SExampleComponent> onEnd;

	// these constructors can be customized
	SExampleComponent();
	SExampleComponent(const SExampleComponent& other);
};