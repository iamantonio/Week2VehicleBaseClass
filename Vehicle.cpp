//
// Created by Tony on 7/21/2022.
//

#include <iostream>
#include "Vehicle.h"

void Vehicle::set_make(std::string make) {
    Make = make;
}

void Vehicle::set_model(std::string model) {
    Model = model;
}

void Vehicle::set_year(int year) {
    Year = year;
}

std::string Vehicle::get_make() {
    return Make;
}

std::string Vehicle::get_model() {
    return Model;
}

int Vehicle::get_year() {
    return Year;
}

void Vehicle::display_vehicle_info() {
    std::cout << "Vehicle Year: \t" << Year << std::endl;
    std::cout << "Vehicle Make: \t" << Make << std::endl;
    std::cout << "Vehicle Model: \t" << Model << std::endl;
}