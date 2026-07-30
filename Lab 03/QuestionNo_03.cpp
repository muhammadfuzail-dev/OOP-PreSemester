/*Question # 03: 
Create a class Sales with 3 private variables SaleID of type integer, ItemName of type string , and Quantity of 
type integer. 
Part (a) Use a default constructor to initialize all variables with any values. 
Part (b) Use a constructor to take user input in all variables to display data. 
Part (c) Use a parameterized constructor to initialize the variables with values of your choice. 
Part (d) Use copy constructor to copy the quantity of previously created object to current one.*/
#include <iostream>
#include <string>
using namespace std;

class Sales{
    int SalesID;
    string ItemName ;
    int Quantity;
    public:
    Sales(){
        SalesID =1234;
        ItemName="Laptop";
        Quantity=12;
        cout<<"Default Constructer"<<endl;
    }
    Sales(bool takeinput){
        cout<<"Enter the Sales ID : "<<endl;
        cin>>SalesID;
        cout<<"Enter the Item Name : "<<endl;
        cin.ignore();
        getline(cin,ItemName);
        cout<<"Enter the Quantity : "<<endl;
        cin>>Quantity;
        cout<<"Constructer To take Input"<<endl;
    }
    Sales(int id,string name,int quant){
        SalesID =id;
        ItemName=name;
        Quantity=quant;
        cout<<"Parameterized Constructer"<<endl;
    }
    Sales(Sales& obj){
        SalesID=0;
        ItemName="Not Avilable Yet";
        Quantity=obj.Quantity;
        cout<<"COPY constructer Quantity Copy "<<endl;
    }
    void display(){
        cout<<"Sales ID : "<<SalesID;
        cout<<" | ItemName : "<<ItemName;
        cout<<" | Quantity : "<<Quantity<<endl;
    }
};

int main(){
    Sales obj2(true);
    obj2.display();
    Sales obj1;
    obj1.display();
    Sales obj3(7766,"Laptop",32);
    obj3.display();
    Sales obj4(obj3);
    obj4.display();
    return 0;

}