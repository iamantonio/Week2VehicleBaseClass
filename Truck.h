//
// Created by Tony on 7/22/2022.
// Derived class for the Vehicle base class called Truck
//

#ifndef WEEK2VEHICLEBASECLASS_TRUCK_H
#define WEEK2VEHICLEBASECLASS_TRUCK_H
#include <iostream>
#include <string>
#include "Vehicle.h"
// Created class Truck that inherits from Vehicle base class
class Truck : virtual public Vehicle{
private:
    double Cargo_Size{};
    double Maximum_Weight{};
public:
    // constructor for the truck class, inherits from Vehicle class and added cargo_size and maximum weight.
    Truck(std::string make,std::string model, int year, double cargo_size, double maximum_weight)
        : Vehicle(std::move(make),move(model), year ) {
        set_cargo_size(cargo_size);
        set_maximum_weight(maximum_weight);
    }
    // getters and setters
    void set_cargo_size(double cargo_size);
    void set_maximum_weight(double maximum_weight);
    double get_cargo_size() const;
    double get_maximum_weight() const;
    // display the info method
    void display_vehicle_info() override;
};


#endif //WEEK2VEHICLEBASECLASS_TRUCK_H
