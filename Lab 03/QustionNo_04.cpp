/*
Question # 04: 
Create a class distance that stores distance in feet and inches. Add a constructor that initializes the object 
with default values. There must be a function that ask user to enter distance in meters and stores accordingly. 
Add two functions to display the distance in meters and in feet. Add a destructor that will notify the user 
when an object is killed.
*/
#include <iostream >
using namespace std;

class Distance{
    int feet;
    int inch;
    public :
    Distance(){
        feet=0;
        inch=0;
    }
    void inputMeter(){
        double meter;
        cout<<"Enter the distance in Meters : ";
        cin>>meter;
        double total_inches;
        total_inches=meter*39.3;
        feet=(int)total_inches/12;
        inch=(int)total_inches%12;
    }

    void displayInMeter(){
        double meter=((feet*12)+inch)/39.3;
        cout<<"The distance in Meter is : "<<meter<<"m"<<endl;
    }
    void displayInFeet(){
        cout<<"The distance in Feet is : "<<feet<<"ft"<< inch<<"inch"<<endl;
    }
    ~Distance(){
        cout<<"Destructer Called Object is Killed"<<endl;
    }

};

int main(){
    Distance d1;
    d1.inputMeter();
    d1.displayInMeter();
    d1.displayInFeet();
}