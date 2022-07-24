/* Week 2 Assignment by Antonio Vargas
 *
 * 1. The car base class shall have a method to display a car's make, model, and year built. -Done
 * 2. Design a sports car class that inherits from the car class. The sports car class shall take in the same information as the base class but will also include the top speed of the sports car and its zero to 60 MPH time in seconds. The sports car class shall override the base function print method. The override print method shall display make, model, year built, top speed, and zero to 60 time. -Done
 * 3. Design a truck class that inherits from the car class. The truck class shall include information about the cargo size in cubic feet and the maximum cargo weight. Create a print method that overrides the print method in the base class. This method shall only output the model of the truck, cargo size in cubic feet and maximum cargo weight. - Done
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
#include "Truck.h"

int main() {
    Vehicle* ptr;
    Sports_Car* ptr2;
    // created car1 from base class
    std::cout << "Base Class Vehicle\n";
    Vehicle car1("Honda","Pilot",2012);
    ptr = &car1; // pointer for car1 object
    ptr->display_vehicle_info(); // display info function from base class
    std::cout << std::endl;
    std::cout << "Sports Car 1\n";
    Sports_Car sports_car1("Mazda", "Miata MX-5", 2022, 137, 6.5); // created sports_car1 from vehicle base class
    ptr2 = &sports_car1;
    std::cout << "Referencing ptr2: " << ptr2 << std::endl;
    ptr2->display_vehicle_info(); // override base class display info method using the method in Sports_Car class
    std::cout << std::endl;
    std::cout << "Sports Car 2 Using setters\n";
    Sports_Car sports_car2("Ford", "Mustang", 2012,200,5); // setting up sport_car2 object.
    sports_car2.display_vehicle_info(); // displays sports_car2
    std::cout << "Using settors.....\n";
    // using setters to change sports_car2
    sports_car2.set_year(2000);
    sports_car2.set_make("Honda");
    sports_car2.set_model("S2000");
    sports_car2.set_top_speed(189);
    sports_car2.set_zero_to_sixty(8);
    std::cout << "Using gettors\n";
    // using getters to retrieved sports_car2 info.
    std::cout<<"Year: " << sports_car2.get_year() <<
    "\nMake: " << sports_car2.get_make() <<
    "\nModel: " << sports_car2.get_model() <<
    "\n Top Speed (MPH): " << sports_car2.get_top_speed() <<
    "\n 0 to 60 (in seconds): " << sports_car2.get_zero_to_sixty();
    std::cout << std::endl;
    std::cout << "Truck 1\n";
    Truck truck1("Ford", "F-150",2022, 52.8,  2238); // created truck1 from Truck class
    truck1.display_vehicle_info(); // display truck class info
    std::cout << std::endl;
    std::cout << "Truck 2 Using Setters\n";
    Truck truck2("Chevy", "Colorado", 2009, 48, 2000);
    truck2.display_vehicle_info();
    // using setters to change the truck2 object
    std::cout << "Using settors\n";
    truck2.set_model("Tacoma");
    truck2.set_cargo_size(52.2);
    truck2.set_maximum_weight(1175);
    truck2.display_vehicle_info();
    std::cout << std::endl;
    return 0;
}
