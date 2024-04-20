#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two Numbers :";
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << "Both Numbers are Positive" << endl;
        return 0;
    }
    if (a > 0 || b > 0)
    {
        cout << "Only one number is positive" << endl;
    }
    else
    {
        cout << "Both Numbers are Negative" << endl;
    }
}