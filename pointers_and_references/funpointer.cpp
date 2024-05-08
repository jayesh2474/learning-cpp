#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*funcptr)(int, int) = add; 
    funcptr(4, 5);
    cout << "The sum is: "<< funcptr(4, 5) << endl; 
}