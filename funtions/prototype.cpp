#include <iostream>
using namespace std;

int multiplyNumbers(int x, int y);

int main()
{
    int num1 = 3, num2 = 7;
    int result = multiplyNumbers(num1, num2);
    cout << "The product is: " << result << endl;
    return 0;
}

int multiplyNumbers(int x, int y)
{
    int product = x * y;
    return product;
}