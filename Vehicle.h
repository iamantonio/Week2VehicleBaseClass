//
// Created by Tony on 7/21/2022.
//

#ifndef WEEK2VEHICLEBASECLASS_VEHICLE_H
#define WEEK2VEHICLEBASECLASS_VEHICLE_H
#include <string>
#include <utility>

class Vehicle {
private:
    // attributes of a vehicle
    std::string Make, Model;
    int Year{};
public:
    //vehicle constructors
    Vehicle(std::string make, std::string model, int year) {
        set_make(std::move(make));
        set_model(std::move(model));
        set_year(year);
    }

    void set_make(std::string make);
    void set_model(std::string model);
    void set_year(int year);

    std::string get_make();
    std::string get_model();
    int get_year();

    virtual void display_vehicle_info();

};


#endif //WEEK2VEHICLEBASECLASS_VEHICLE_H
