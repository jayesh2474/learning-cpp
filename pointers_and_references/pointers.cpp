#include <iostream>
using namespace std;
int main()
{
    int num = 69;
    int *ptr = &num;
    int value = *ptr;
    cout<< value <<endl;
}