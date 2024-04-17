#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y,z;
    cout << "Value of x Before Increment : "<< x << "\n";
    y = x++;
    cout << "Value of x After Post-Increment : "<< y << "\n";
    z = ++x;
    cout << "Value of x After Pre-Increment : "<< z << "\n";
    return 0;
}