#include <iostream>
using namespace std;
int main()
{
    int a =1;
    float b = 4.11;
    double c =5.55555555555;
    char  d='A';
    bool  e=true;
    int f[3]={2,4,6};
    cout<< "The value of variable 'a' is :" << a << endl;
    cout<< "The value of variable 'b' is :" <<  b << endl;
    cout<< "The value of variable 'c' is :" << c <<endl;
    cout<< "The value of variable 'd' is :" << d << endl;
    cout <<"The value of variable 'e' is :" << e << endl;
    for(int i=0; i<3 ;i++)
    {
        cout<< "Element at index [" << i <<"] is =" <<f[i]<<endl;
    }
    return 0;
}