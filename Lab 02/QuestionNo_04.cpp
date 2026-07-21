/*
Question # 04: 
Define a class Car with private attributes model, year, and price. Provide setter and getter functions for each 
attribute. 
*/
#include <iostream>
using namespace std;
class Car{
    string model;
    int year;
    int price;
    public :
    void set_model(string str){ model=str; }
    void set_year(int i){ year=i; }
    void set_price(int i){ price=i; }

    string get_model(){return model;    }
    int get_year(){return year;    }
    int get_price(){return price;    }

    void display(){
        cout<<"Model of the car : "<<model<<endl;
        cout<<"Year  of the car : "<<year<<endl;
        cout<<"Price of the car : "<<price<<endl;
    }
};
int main(){
    Car car1;
    car1.set_model("Honda");
    car1.set_year(2023);
    car1.set_price(2300000);

    car1.display();
    return 0;
}