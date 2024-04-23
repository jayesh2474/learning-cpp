#include <iostream>


union Data
{
    int num;
    char letter;
    float decimal;
};

int main()
{
    
    Data myData;

    
    myData.num = 42;

    
    std::cout << "The number is: " << myData.num << std::endl;

    return 0;
}
