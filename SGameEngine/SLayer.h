#pragma once

#define define_has_member(member_name)                                         \
    template <typename T>                                                      \
    class has_member_##member_name                                             \
    {                                                                          \
        typedef char yes_type;                                                 \
        typedef long no_type;                                                  \
        template <typename U> static yes_type test(decltype(&U::member_name)); \
        template <typename U> static no_type  test(...);                       \
    public:                                                                    \
        static constexpr bool value = sizeof(test<T>(0)) == sizeof(yes_type);  \
    }

#define has_member(class_, member_name)  has_member_##member_name<class_>::value

template <class T>
class SLayer {
private:

public:
	std::vector<T> objects;
	std::unordered_set<std::string> tags;

	SLayer(const std::vector<T>& _objects = std::vector<T>());
	SLayer(const SLayer<T>& other);

	void update();
	void draw();

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
void SLayer<T>::update() {
    define_has_member(update);
    if (has_member(T, update)) {
        for (T& object : objects) {
            object.update();
        }
    }
}

template <class T>
void SLayer<T>::draw() {
    define_has_member(draw);
    if (has_member(T, draw)) {
        for (T& object : objects) {
            object.draw();
        }
    }
}