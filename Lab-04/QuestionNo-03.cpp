/*
Task-03: 
User Construct a class named Circle that has a floating-point data member 
named radius getting from user input.  The class should have a zero-argument 
constructor that initializes this data member to 0. It should have member 
functions named calcCircumference() and calcArea() that calculate the 
circumference and area of a circle respectively, a member function 
setRadius()to set the radius of the circle, a member function getRadius() to 
return the radius, and a member function showData() that displays the 
circle’s radius, circumference, and area. The formula for the area of a circle is 
A=πr2. The formula for the circumference of a circle is C=2πr. 
Note: Without using this <cmath>  */
#include <iostream>
#define PI 3.14

using namespace std;
class Circle{
    float radius;
    float circum;
    float area;
    public:
    Circle(){
        radius=0;
        circum=0;
        area=0;
    }
    void setRadius(float rad){radius=rad;}
    float getRadius(){return radius;}
    void calcCircumference(){
        circum=2*PI*radius;
    }
    void calcArea(){
        area=PI*radius*radius;
    }
    void showData(){
        calcCircumference();
        calcArea();
        cout <<"The circle's Radius    : "<<radius<<endl;
        cout <<"Circle's Circumference : "<<circum<<endl;
        cout <<"The circle's Area      : "<<area<<endl;
    }
};

int main(){
    Circle c1;
    float inputRadius;
    cout<<"Enter the Radius Of a Circle : ";
    cin>>inputRadius;
    c1.setRadius(inputRadius);
    c1.showData();
}