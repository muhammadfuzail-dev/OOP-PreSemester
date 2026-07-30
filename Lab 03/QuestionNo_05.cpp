/*
Question # 05: 
A phone number, such as (021) 38768214, can be thought of as having three parts: the area code (021) the 
exchange (3876) and the number (8214). Write a program that uses a class Phone to store these three parts of 
a phone number in specific attributes. Add a constructor that accept a number and separate these elements 
from that number. Write a display function that display the details of the number. 
Sample Program output: 
12 | P a g e 
Please enter Your No: 02134567893 
Your Area code is: 021 
Your Exchange Code is: 3456 
Your Consumer No is: 7893.
*/
#include <iostream>
#include <string>
using namespace std;

class Phone {
    string areaCode;
    string exchangeCode;
    string consumerNo;
    public :
    Phone(string number){
        areaCode=number.substr(0,3);
        exchangeCode=number.substr(3,4);
        consumerNo=number.substr(7,4);
    }
    void display(){
        cout<<"Your Area code is : "<<areaCode<<endl;
        cout<<"Your Exchange code is : "<<exchangeCode<<endl;
        cout<<"Your Consumer No is : "<<consumerNo<<endl;
    }
};
int main(){
    string number;
    cout<<"Please enter Your No : ";
    cin>>number;
    Phone p1(number);
    p1.display();
    return 0;

}
