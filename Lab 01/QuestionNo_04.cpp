/*Q4: Design a C++ program that simulates a simple inventory system. Define a structure 
named Product with attributes for product code, name, quantity, and price. Implement 
functions to add and display products. */

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct product{
    int code ;
    string name;
    int quantity; 
    double price;
};
vector<product> inventory;

void addproducts(){
    product newproduct;
    cout<<"Enter Code : ";
    cin>>newproduct.code;
    cin.ignore();   // buffer se leftover newline clear karo
    cout<<"Enter name of product : ";
    getline(cin, newproduct.name);
    cout<<"Enter Quantity of the Product : ";
    cin>>newproduct.quantity;
    while(newproduct.quantity<0){
        cout<<"Negative, Enter Positive Value"<<endl;
        cout<<"Enter Quantity of the Product : ";
        cin>>newproduct.quantity;

    }
    cout<<"Enter price : ";
    cin>>newproduct.price;
    while(newproduct.price<0){
        cout<<"Negative, Enter Positive Value"<<endl;
        cout<<"Enter price : ";
        cin>>newproduct.price;

    }
    inventory.push_back(newproduct);
    return;
}

void displayproducts(){
    int n=inventory.size();
    if(n==0){
        cout << "No Product is avilable :"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cout<<"Product : "<<i+1<<endl;
        cout<<"Code : "<<inventory[i].code<<endl;
        cout<<"Name : "<<inventory[i].name<<endl;
        cout<<"Quantity : "<<inventory[i].quantity<<endl;
        cout<<"Price : "<<inventory[i].price<<endl;
    }
    return;
}

int main(){
    int choice;

    do{
        cout<<"######-Simple Inventory System-#####"<<endl;
        cout<<"1 - To Add Products : "<<endl;
        cout<<"2 - To Display Products : "<<endl;
        cout<<"0 - To Exit : "<<endl;
        cout<<"Enter Your Choice (0-2) : ";
        cin>>choice;
        switch(choice){
            case 1: addproducts(); break;
            case 2: displayproducts(); break;
            case 0: cout<<"Exiting..."<<endl; break;
            default: cout<<"Invalid Choice, Try Again."<<endl;
        }
    }
    while(choice!=0); 
    return 0;
}