#include <iostream>
#include <string>

class Car
{
private:
    std::string color;
    std::string brand;

public:
    Car(std::string c, std::string b) : color(c), brand(b) {}

    void displayDetails() const
    {
        std::cout << "Car brand: " << brand << ", Color: " << color << std::endl;
    }
};

int main()
{

    Car myCar("Red", "Toyota");
    Car dreamCar("Black", "Tesla");

    std::cout << "My Car: ";
    myCar.displayDetails();

    std::cout << "Dream Car: ";
    dreamCar.displayDetails();

    return 0;
}
