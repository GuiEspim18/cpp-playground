#include <iostream>

#include "classes/Vehicle.h"

int main() {
  Vehicle vehicle("Ford", "Fiesta", "ABC123", "red", "gasoline");
  for (int i = 0; i < 10; i++) {
    std::cout << vehicle.brand << std::endl;
  }
  return 0;
}