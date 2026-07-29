/*
Question # 01: 
Create a class named BankAccount with private data members accountNumber, accountHolder, and balance. 
Implement a parameterized constructor to initialize these attributes, setter and getter methods for all attributes, 
a method deposit to add an amount to the balance, and a method withdraw to deduct an amount from the 
balance. Also, provide a destructor.
*/
#include <iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolder;
    int balance;
    public:
    BankAccount(int number,string str,int bal){
        accountNumber=number;
        accountHolder= str;
        balance=bal;
    }
    void setno(int number){
        accountNumber=number;
    }
    void setholder(string str){
        accountHolder=str;
    }
    void setbalance(int bal){
        accountNumber=bal;
    }
    int getNo(){
        return accountNumber;
    }
    string getHolder(){
        return accountHolder;
    }
    int getBal(){
        return balance;
    }
    void deposit(int ammount){
        if(ammount>0){
            balance+=ammount;
            cout<<"Deposited : "<<ammount<<" | New balance : "<<balance<<endl;
        }
        else{
            cout<<"Entered invalid Amount please try again "<<endl;
        }
    }
    void withDraw(int ammount ){
        if(ammount <=balance&&ammount>=0){
            balance-=ammount;
            cout<<"WithDraw : "<<ammount<<" | new balance : "<<balance<<endl;
        }
        else{
            cout<<"Enter invalid Ammount Please try again..."<<endl;
        }
    }

    ~BankAccount(){
        cout<<"Destructer called for Account : "<<accountNumber<<endl;
    }
};


int main(){
    BankAccount acc1(10001,"Fuzail Atal",5000);
    cout<<"Account Detail "<<endl;
    cout<<"Account Number : " << acc1.getNo()<<endl;
    cout<<"Account Holder : " << acc1.getHolder()<<endl;
    cout<<"Account Number : " << acc1.getBal()<<endl;

    cout<<"Transication"<<endl;
    acc1.deposit(4564);
    acc1.withDraw(1233);
    acc1.withDraw(12335);

    cout<<"\nEnd Of Main Distructer Will triger"<<endl;
}