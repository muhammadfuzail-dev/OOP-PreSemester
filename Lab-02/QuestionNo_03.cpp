/*
Question # 03: 
Create a class called Employee that includes three pieces of information as data members a first name 
(type string), a last name (type string) and a monthly salary (type int). Provide a set and a get function 
for each data member. If the monthly salary is not positive, set it to 0. Write a test program that 
demonstrates class Employee’s capabilities. 
Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 
percent raise and display each Employee’s yearly salary again. */
#include <iostream>
using namespace std;

class Employee{
    private:
    string firstname;
    string lastname;
    int salary;
    public:
    void setterfirstname(string str){ firstname=str; }
    void setterlastname(string str){ lastname=str; }
    void settersalary(int i){
        if(i <= 0)
            salary = 0;
        else
            salary = i;
        }
    string getfirstname(){ return firstname;}
    string getlastname(){ return lastname;}
    int getsalery(){ return salary;}

    void displaydata(){
        cout<<"First Name     : "<<firstname<<endl;
        cout<<"Last Name      : "<<lastname<<endl;
        cout<<"Monthly Salary : "<<salary<<endl;
        cout<<"Yearly Salary  : "<<12*salary<<endl;
    }
    void giveRaise(){
        salary = salary + (salary * 10 / 100);
    }
};

int main(){
    Employee e1;
    e1.setterfirstname("Muhammad");
    e1.setterlastname("Fuzail");
    e1.settersalary(1445);
    Employee e2;
    e2.setterfirstname("Muhammad");
    e2.setterlastname("Abrar");
    e2.settersalary(-354355);

    cout<<"Before Raise\n"<<endl;
    e1.displaydata();
    e2.displaydata();

    e1.giveRaise();   // ✅ ye missing tha
    e2.giveRaise();

    cout<<"\n\nAfter Raise \n\n"<<endl;
    e1.displaydata();
    e2.displaydata();
    return 0;
}