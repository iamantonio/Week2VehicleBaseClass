/* Week 2 Assignment by Antonio Vargas
 *
 * 1. The car base class shall have a method to display a car's make, model, and year built.
 * 2. Design a sports car class that inherits from the car class. The sports car class shall take in the same information as the base class but will also include the top speed of the sports car and its zero to 60 MPH time in seconds. The sports car class shall override the base function print method. The override print method shall display make, model, year built, top speed, and zero to 60 time.
 * 3. Design a truck class that inherits from the car class. The truck class shall include information about the cargo size in cubic feet and the maximum cargo weight. Create a print method that overrides the print method in the base class. This method shall only output the model of the truck, cargo size in cubic feet and maximum cargo weight.
 * 4. Create two sports car and two truck objects.
 *  a. For one truck and one sports car object, set the values through an overloaded constructor.
 *  b. For the second set of objects set the values through mutators (setters) and accessors (getters).
 *  5. Your program shall demonstrate the use of the print function for each object.
 *  6. Your program shall demonstrate at least one instance of pointer reference and dereference (done without a smart pointer) and one smart pointer.
 *  7. Implement and use at least one friend function. You may choose the functionality of the friend function. *
 *
 */



#include <iostream>
#include "Vehicle.h"
#include "Sports_Car.h"

int main() {
    Vehicle car1("Honda","Pilot",2012);
    car1.display_vehicle_info();
    std::cout << std::endl;
    Sports_Car car2("Mazda", "Miata MX-5", 2022, 137, 6.5);
    car2.display_vehicle_info();
    return 0;
}
