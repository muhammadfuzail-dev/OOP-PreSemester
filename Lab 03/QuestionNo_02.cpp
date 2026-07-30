/*
Question # 02: 
Create a class named Point to represent a point in 3D space. Include private data members x, y, and z. 
Implement a parameterized constructor to initialize these attributes, setter and getter methods for all attributes, 
and a method distanceToOrigin that calculates the distance of the point from the origin (0, 0, 0). Also, provide a 
destructor. 
Note: add a default constructor that sets the coordinates to (0, 0, 0) if no values are provided during 
object creation. 
Formula = sqrt(x * x + y * y + z * z);
*/
#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x;
    int y;
    int z;
    public :
    Point(){
        x=0;
        y=0;
        z=0;
    }
    Point(int a ,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void setx(int a){x=a;}
    void sety(int b){y=b;}
    void setz(int c){z=c;}

    int getx(){return x;}
    int gety(){return y;}
    int getz(){return z;}

    void distanceToOrigin(){
        double distance;
        distance=sqrt(x*x+y*y+z*z);
        cout<<"Distance from Origin Is : "<<distance<<endl;
    }
    ~Point(){
        cout<<"Destructer Called For : "<<x<<","<<y<<","<<z<<endl;
    }
};
int main(){
    Point p1(2,4,4);
    p1.distanceToOrigin();

}