#include <iostream>
using namespace std;
int addnum(int a, int b)
{
    int sum = a + b;
    return sum;

}
int main()
{
    cout << "Enter  two numbers: ";
    int x, y;
    cin >> x >> y;
    int ans = addnum(x, y);
    cout << "The sum of the two number: " << ans << endl;
    return 0;
}
