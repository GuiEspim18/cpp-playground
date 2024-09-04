#ifndef VEHICLE_H
#define VEHICLE_H 

#include <iostream>

export module Vehicle;

export class Vehicle {
    public:
        std::string brand;
        std::string model;
        std::string plate;
        std::string color;
        std::string fuel;

        Vehicle(std::string brand, std::string model, std::string plate, std::string color, std::string fuel)
};

#endif