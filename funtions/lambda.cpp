#include <iostream>
using namespace std;

int main()
{
    
    auto add = [](int a, int b)
    {
        return a + b;
    };
    int multiplier = 3;
    auto times = [multiplier](int a)
    {
        return a * multiplier;
    };
    int result2 = times(5);

    int result = add(3, 5);

    
    cout << "The sum is " << result << endl;
    cout << "The multiplication is " << result2 << endl;

    return 0;
}