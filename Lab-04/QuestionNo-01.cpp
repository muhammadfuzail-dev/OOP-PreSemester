/*
Task-01: 
Create a class named RealtorCommission. Fields include the sale price of a house, the sales 
commission rate, and the commission. Create two constructors. Each constructor requires the sales 
price (expressed as a double) and the commission rate. One constructor requires the commission 
rate to be a double, such as .06. The other requires the sale price and the commission rate expressed 
as a whole number, such as 6. Each constructor calculates the commission value based on the price 
of the house multiplied by the commission rate. The difference is that the constructor that accepts 
the whole number must convert it to a percentage by dividing by 100. Also include a display function 
for the fields contained in the RealtorCommission class.  
Write a main()function that instantiates at least two RealtorCommission objects—one that uses a 
decimal and one that uses a whole number as the commission rate 
. */
#include <iostream>
#include <string>
using namespace std;
class RealtorCommission{
    double salePrice;
    double commissionRate;
    double commission;
    public:
    RealtorCommission(double salePrice,double commissionRate){
        this->salePrice=salePrice;
        this->commissionRate=commissionRate;
        this->commission=this->salePrice*this->commissionRate;
    }
    RealtorCommission(double salePrice,int commissionRate){
        this->salePrice=salePrice;
        this->commissionRate=commissionRate/100.0;
        this->commission=(this->salePrice*this->commissionRate);
    }
    void Display(){
        cout<<"The sale price of the house is : "<<salePrice<<endl;
        cout<<"The Commission Rate of the house is : "<<commissionRate<<endl;
        cout<<"The Commission of the house is : "<<commission<<endl;
    }
};

int main(){
    RealtorCommission obj1(124355,0.06);
    RealtorCommission obj2(124355,6);
    obj1.Display();
    obj2.Display();
}