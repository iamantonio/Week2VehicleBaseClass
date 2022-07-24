//
// Created by Tony on 7/22/2022.
// Methods for the Sports_Car class stored in this file.

#include "Sports_Car.h"
#include <iostream>
#include <string>
// methods for the setters and getters to set the class values.
void Sports_Car::set_top_speed(int top_speed) {
    Top_Speed = top_speed;
}

void Sports_Car::set_zero_to_sixty(double zero_to_sixty) {
    Zero_to_Sixty = zero_to_sixty;
}

int Sports_Car::get_top_speed() const {
    return Top_Speed;
}

double Sports_Car::get_zero_to_sixty() const {
    return Zero_to_Sixty;
}
// display sports car info and overriding the vehicle class display method.
void Sports_Car::display_vehicle_info() {
    Vehicle::display_vehicle_info();
    std::cout << "Vehicle Top Speed: \t" << Top_Speed << " MPH" << std::endl;
    std::cout << "Vehicle 0 - 60: \t" << Top_Speed << " Seconds" << std::endl;
}