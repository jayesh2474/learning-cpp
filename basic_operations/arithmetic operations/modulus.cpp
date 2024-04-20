#include <iostream>
using namespace  std;

class modul
{
    private: int a, b;
    int ans;

    public:
    modul(int x, int y)
    {
        a = x;
        b = y;
        ans = a % b;
    }
    int info()
    {
        return ans;
    }
};
int main()
{
    cout << "Enter two numbers : ";
    int a,b;
    cin >> a >> b;
    modul obj(a,b);
    cout << "remainder of " << a << "/" << b << " : " << obj.info() << "\n";
}