/*
Question # 05: 
Develop a class Temperature with a private attribute celsius. Include setter and getter functions for the 
temperature in Celsius and a method to convert it to Fahrenheit.
*/
#include <iostream>
using namespace std;
class Temperature {
    float celsius;
    public:
    void set_celsius(float c){celsius =c;}
    float get_celsius(){ return celsius;}
    void display(){
        float f;
        f=celsius*(9/5.0)+32;
        cout<<"Temperature In CELSIUS    : "<<celsius<<endl;
        cout<<"Temperature In FEHRENHEIT : "<<f<<endl;
    }
};
int main(){
    Temperature t1;
    t1.set_celsius(38);
    t1.display();

}