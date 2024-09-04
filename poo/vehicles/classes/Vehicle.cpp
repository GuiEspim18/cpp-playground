#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string brand, std::string model, std::string plate,
                 std::string color, std::string fuel)
    : brand(brand), model(model), plate(plate), color(color), fuel(fuel){};