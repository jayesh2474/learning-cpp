#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y, z;
    cout << "Value of x Before Decrement : " << x << "\n";
    y = x--;
    cout << "Value of x After Post-Decrement : " << y << "\n";
    z = --x;
    cout << "Value of x After Pre-Decrement : " << z << "\n";
    return 0;
}