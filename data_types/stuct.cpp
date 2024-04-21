#include<iostream>
using namespace std;
struct person
{
   string name;
    int age;
    float height;

};

int  main() {
person p;
cout<<"Enter  the name: ";
cin>>p.name;
cout<<"\nEnter the age :";
cin>>p.age;
cout << "Enter your height (in meters): ";
cin >> p.height;

cout << "\nHere are the details you entered:" << std::endl;
std::cout << "Name: " << p.name << std::endl;
std::cout << "Age: " << p.age << std::endl;
std::cout << "Height: " << p.height << " meters" << std::endl;
}