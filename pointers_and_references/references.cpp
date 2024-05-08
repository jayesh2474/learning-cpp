#include<iostream>
using namespace std;
int main()
{
    int var = 10;
    int& ref = var;
    cout << "Value of variable 'var' is: "<< var << endl;
    cout << "Address of variable  'ref' is: "<< ref <<endl;
    ref = 69;
    cout << "Value of variable 'var' is: " << var << endl;
}