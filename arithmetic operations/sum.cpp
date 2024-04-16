#include <iostream>
using namespace std;

class sum
{
private:
    int ans;
    int x, y;

public:
    sum(int a, int b)
    {
        x = a;
        y = b;
        ans = x + y;
    }

    int info()
    {
        return ans;
    }
};

int main()
{
    cout << "Enter two numbers : ";
    int x, y;
    cin >> x >> y;
    sum obj1(x, y);

    cout << "Sum of x and y is : " << obj1.info() << "\n";
}