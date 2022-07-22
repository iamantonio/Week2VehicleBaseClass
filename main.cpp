#include <iostream>
#include "Vehicle.h"

int main() {
    Vehicle sports_car("Honda", "Pilot", 2012);
    sports_car.display_vehicle_info();

    std::cout << sports_car.get_make();

    return 0;
}
