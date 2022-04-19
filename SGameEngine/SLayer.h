#pragma once

class SLayer : public SComponent {
private:
	static void start(SLayer& instance);

	static void update(SLayer& instance);

	static void draw(SLayer& instance);

	static void end(SLayer& instance);

public:
	std::vector<SComponent> gameObjects;
	static SComponentEvent<SLayer> onStart;
	static SComponentEvent<SLayer> onUpdate;
	static SComponentEvent<SLayer> onDraw;
	static SComponentEvent<SLayer> onEnd;

	SLayer(std::vector<SComponent> _gameObjects = std::vector<SComponent>());
	SLayer(const SLayer& other);

};