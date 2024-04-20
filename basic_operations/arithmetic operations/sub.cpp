#include<iostream>
using namespace std;

class sub
{
    private: 
    int a,b;
    int ans;

    public:
    sub(int x,int y)
    {
        a=x;
        b=y;
        ans = a - b;
    }

    int info()
    {
        return ans;
    }

};
int main()
{
    cout<<"Enter two numbers : ";
    int a,b;
    cin>> a >> b;
    sub obj(a,b);
    cout<< "a - b is equal to " << obj.info() << "\n";

}