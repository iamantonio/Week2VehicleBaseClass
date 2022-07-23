//
// Created by Tony on 7/22/2022.
//

#ifndef WEEK2VEHICLEBASECLASS_SPORTS_CAR_H
#define WEEK2VEHICLEBASECLASS_SPORTS_CAR_H

#include "Vehicle.h"
#include <string>
#include <utility>

// creating the sports car class and inheriting attributes from the vehicle class.
class Sports_Car : virtual public Vehicle{
private:
    int Top_Speed{};
    double Zero_to_Sixty{};
public:
    // creating constructor for sports car class.
    Sports_Car(std::string make, std::string model, int year, int top_speed, double zero_to_sixty)
    : Vehicle(std::move(make), std::move(model), year){
        set_top_speed(top_speed);
        set_zero_to_sixty(zero_to_sixty);
    }
    // set the values through setters and getters
    void set_top_speed(int top_speed);
    void set_zero_to_sixty(double zero_to_sixty);
    int get_top_speed() const;
    double get_zero_to_sixty() const;
    // display the information method
    void display_vehicle_info() override;

};


#endif //WEEK2VEHICLEBASECLASS_SPORTS_CAR_H
