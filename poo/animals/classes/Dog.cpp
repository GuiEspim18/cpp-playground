#include <iostream> 

#include "Animal.cpp"

class Dog : public Animal {

    public:
        void sound() override {
            std::cout << "Au au" << std::endl;
        }

};