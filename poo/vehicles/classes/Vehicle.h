#ifndef VEHICLE_H
#define VEHICLE_H 

#include <iostream>

class Vehicle {
    public:
        std::string brand;
        std::string model;
        std::string plate;
        std::string color;
        std::string fuel;

        Vehicle(std::string brand, std::string model, std::string plate, std::string color, std::string fuel) {
            this -> brand = brand;
            this -> model = model;
            this -> plate = plate;
            this -> color = color;
            this -> fuel = fuel;
        }
};

#endif