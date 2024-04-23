#include <iostream>

int main()
{
    int num = 42;
    double pi = 3.14159;

    num = pi;

    std::cout << "The value of num is: " << num << std::endl;
    std::cout << "The value of pi is: " << pi << std::endl;

    return 0;
}