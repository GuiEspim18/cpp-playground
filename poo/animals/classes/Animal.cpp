#include <iostream>

class Animal {

    private:
        std::string name;
        std::string color;

    public:
        void setName(std::string name) {
            this -> name = name;
        }

        std::string getName() {
            return this -> name;
        }

        void setColor(std::string color) {
            this -> color = color;
        }

        std::string getColor() {
            return this -> color;
        }

        virtual void sound() {
            std::cout << "Animal sound!" << std::endl;
        }

};