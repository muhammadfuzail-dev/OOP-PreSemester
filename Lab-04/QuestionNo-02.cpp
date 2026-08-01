/*
Task-02: 
Let's consider a car rental system instead of a hotel rent calculator. 
1. The car rental system requires a module that can calculate the rental charges for customers. 
The system should allow for independent changes in implementation while keeping the 
interface intact, enabling flexibility for evolving requirements.  
2. The rental charges for each customer are $50.75 per day, a rate set by the car rental 
company's committee and subject to complex formalities for change. 
3.  The module should accept the customer's name and the number of rental days as 
arguments in the constructor. The customer's name must be initialized only once during 
construction, and any subsequent attempts to change it should fail. 
4. Based on the number of rental days, the module determines if the customer is eligible for a 
discount. Customers renting for more than a week are entitled to a discount, otherwise, they 
are charged at the standard rate.  
5. The discounted rental fee is calculated after deducting one day from the total rental period. 
6. At the end, the module displays the following details: 
 a. Customer Name  
 b. Rental Days  
 c. Rental Amount  
 The display function should be read-only and must not modify any data member. 
                                                RentalCalculator: 
                                                    -rentPerDay 
                                                    - customerName 
                                                    - numberOfDays 
                                                    - customerRent 
                                                Methods: 
                                                   + RentCalculator(); 
                                                   + RentWithDiscount(); 
                                                   + RentWithoutDiscount();  
                                                   + DisplayRent();  
Instructions: 
 Implement the class structure as specified. Use appropriate data types, return types, and function 
arguments. Demonstrate the results for two initialized instances. */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class RentalCalculator{
    const double rentPerDay;
    const string customerName;
    int numberOfDays;
    double CustomerRent;
    public:

    RentalCalculator(string name,int days):rentPerDay(50.75),customerName(name),numberOfDays(days),CustomerRent(0.0){
    
    }
    void RentWithDiscount(){
            CustomerRent=(numberOfDays-1)*rentPerDay;
    }
    void RentWithoutDiscount(){
        CustomerRent=numberOfDays*rentPerDay;
    }
    void CalculateRent(){
        if(numberOfDays>7)RentWithDiscount();
        else RentWithoutDiscount();
    }
    void DisplayRent()const{
        cout<<"Customer's Name : "<<customerName<<endl;
        cout<<"Number OF Days  : "<<numberOfDays<<endl;
        cout<<"Customer's Rent : $"<<CustomerRent<<endl;
    }
};
int main(){
    RentalCalculator R1("Muhammad",3);
    R1.CalculateRent();
    R1.DisplayRent();

    RentalCalculator R2("Abrar",12);
    R2.CalculateRent();
    R2.DisplayRent();
    return 0;
    
}