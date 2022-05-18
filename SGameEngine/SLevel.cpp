#include "SGameEngine.h"

#define call_layer_function(component, function)										\
	SLayer<component>* componentLayer = dynamic_cast<SLayer<component>*>(layer.get());	\
	if (componentLayer) {																\
		SLayer<component>::function(*componentLayer);									\
		break;																			\
	}

#define start_layer(component) call_layer_function(component, start)
#define update_layer(component) call_layer_function(component, update)
#define draw_layer(component) call_layer_function(component, draw)
#define end_layer(component) call_layer_function(component, end)

SLevel::SLevel(const std::vector<std::unique_ptr<SComponent>>& _layers) :
	layers(_layers)
{
	tags = std::unordered_set<std::string>({ "level" });
}

SLevel::SLevel(const SLevel& other) :
	layers(other.layers)
{
	tags = other.tags;
}

void SLevel::start(SLevel& instance) {
	for (std::unique_ptr<SComponent>& layer : instance.layers) {

	}
}

void SLevel::update(SLevel& instance) {
	for (const std::unique_ptr<SComponent>& layer : instance.layers) {
		update_layer(SGameObject)
	}
}

void SLevel::draw(SLevel& instance) {
	for (const std::unique_ptr<SComponent>& layer : instance.layers) {
		draw_layer(SGameObject)
	}
}

void SLevel::end(SLevel& instance) {
	for (const std::unique_ptr<SComponent>& layer : instance.layers) {

	}
}

void SLevel::addLayer(const std::unique_ptr<SComponent>& layer) {
	layers.push_back(layer);
}

void SLevel::insertLayer(const unsigned int index, const std::unique_ptr<SComponent>& layer) {
	layers.insert(layers.begin() + index, layer);
}

void SLevel::setLayer(const unsigned int index, std::unique_ptr<SComponent>& layer) {
	layers[index] = std::move(layer);
}

std::unique_ptr<SComponent>& SLevel::getLayer(const unsigned int index) {
	return layers[index];
}

void SLevel::removeLayer(const unsigned int index) {
	layers.erase(layers.begin() + index);
}