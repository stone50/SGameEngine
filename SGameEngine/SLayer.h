#pragma once

template <class T>
class SLayer : public SComponent {
private:

public:
	std::vector<T> objects;

	SLayer(const std::vector<T>& _objects = std::vector<T>());
	SLayer(const SLayer<T>& other);

    static void start(SLayer<T>& instance);
	static void update(SLayer<T>& instance);
	static void draw(SLayer<T>& instance);
    static void end(SLayer<T>& instance);

};

template <class T>
SLayer<T>::SLayer(const std::vector<T>& _objects) :
    objects(_objects)
{
    tags = std::unordered_set<std::string>({ "layer" });
}
template <class T>
SLayer<T>::SLayer(const SLayer<T>& other) :
    objects(other.objects)
{
    tags = other.tags;
}

template <class T>
void SLayer<T>::start(SLayer<T>& instance) {
    if (!SLayer<T>::canStart) {
        return;
    }
    for (T& object : objects) {
        object.start();
    }
}

template <class T>
void SLayer<T>::update(SLayer<T>& instance) {
    for (T& object : objects) {
        object.update();
    }
}

template <class T>
void SLayer<T>::draw(SLayer<T>& instance) {
    for (T& object : objects) {
        object.draw();
    }
}

template <class T>
void SLayer<T>::end(SLayer<T>& instance) {
    for (T& object : objects) {
        object.end();
    }
}