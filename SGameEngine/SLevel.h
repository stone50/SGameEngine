#pragma once

class SLevel : public SComponent {
private:
	std::vector<std::unique_ptr<SComponent>> layers;

public:
	SLevel(const std::vector<std::unique_ptr<SComponent>>& _layers = std::vector<std::unique_ptr<SComponent>>());
	SLevel(const SLevel& other);

	static void start(SLevel& instance);
	static void update(SLevel& instance);
	static void draw(SLevel& instance);
	static void end(SLevel& instance);

	void addLayer(const std::unique_ptr<SComponent>& layer);
	void insertLayer(const unsigned int index, const std::unique_ptr<SComponent>& layer);
	void setLayer(const unsigned int index, std::unique_ptr<SComponent>& layer);
	std::unique_ptr<SComponent>& getLayer(const unsigned int index);
	void removeLayer(const unsigned int index);

};