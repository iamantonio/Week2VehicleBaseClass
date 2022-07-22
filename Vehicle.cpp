//
// Created by Tony on 7/21/2022.
//

#include <iostream>
#include <utility>
#include "Vehicle.h"

void Vehicle::set_make(std::string make) {
    Make = std::move(make);
}

void Vehicle::set_model(std::string model) {
    Model = std::move(model);
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
    std::cout << "Vehicle Year: \t\t" << Year << std::endl;
    std::cout << "Vehicle Make: \t\t" << Make << std::endl;
    std::cout << "Vehicle Model: \t\t" << Model << std::endl;
}