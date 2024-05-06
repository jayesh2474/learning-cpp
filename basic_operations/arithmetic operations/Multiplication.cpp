#include <iostream>
using namespace std;

class multi
{
    private:
    int a,b;
    int ans;
 
    public:
    multi(int x, int y)
    {
        a = x;
        b  = y;
        ans = a* b;
    }
    int info()
    {
        return ans;
    }
};
int main()
{
    cout << "Enter Two Nublers For Multiplication :";
    int a,b;
    cin >> a >> b;
    multi obj(a,b);
    cout << "Multiplication Of  Given Numbers Is :"<<obj.info() <<"\n";
}
