//
// Created by Tony on 7/22/2022.
// Methods for the Truck class stored in this file.
//

#include "Truck.h"
#include <iostream>
// set up the methods for the getters and setters
void Truck::set_cargo_size(double cargo_size) {
    Cargo_Size = cargo_size;
}

void Truck::set_maximum_weight(double maximum_weight) {
    Maximum_Weight = maximum_weight;
}

double Truck::get_cargo_size() const {
    return Cargo_Size;
}

double Truck::get_maximum_weight() const {
    return Maximum_Weight;
}

// set up the display info method
void Truck::display_vehicle_info() {
    std::cout << "Vehicle Model: \t\t\t" << Vehicle::get_model() << std::endl;
    std::cout << "Vehicle Cargo Size: \t" << Cargo_Size << " cu ft" << std::endl;
    std::cout << "Vehicle Maximum Weight: " << Maximum_Weight << " GVW" << std::endl;
}
