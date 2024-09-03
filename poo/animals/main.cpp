#include "classes/Dog.cpp"

#include <iostream>

int main() {
    Dog dog;

    dog.setName("Billy");
    dog.setColor("White");

    std::cout << dog.getName() << "is a " << dog.getColor() << " dog!" << std::endl;

    dog.sound();

    return 0;
}