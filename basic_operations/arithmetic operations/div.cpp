#include<iostream>
using namespace std;

class divi
{
    private: 
    int a , b;
    int ans;

    public:
    divi(int x, int y)
    {
        a = x;
        b = y;
        ans =  a/b;
    }
    int info()
    {
        return ans;
    }
};

int main()
{
    cout << "Enter Two Numbers For Division  : ";
    int a , b;
    cin >>  a >> b;
    divi obj1(a,b);
    cout << "The Result is : " << obj1.info();
}
