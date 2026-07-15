/*Q5: Design a C++ program to manage a bank account. Create a structure named BankAccount 
with attributes for account number, account holder's name, and balance. Implement functions 
for deposit, withdrawal, and display account details. */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct BankAccount{
    int accountno;
    string name;
    double balance;
};

vector<BankAccount> accounts;

void Deposit(){
    int acc;
    cout<<"Enter account No to Deposit : ";
    cin>>acc;
     for(int i=0;i<accounts.size();i++){
        if(accounts[i].accountno==acc){
            int amount;
            cout<<"Enter the Ammount to deposit : ";
            cin>>amount;
            accounts[i].balance+=amount;
            return;
        }
    }
    cout<<"    No account Exist\n    Create New Account"<<endl;


    BankAccount newaccount;
    cout<<"Enter Account Number : ";
    cin>>newaccount.accountno;
    cout<<"Enter Holder's Name : ";
    cin.ignore();
    getline(cin,newaccount.name);
    cout<<"Enter the Ammount to deposit : ";
    cin>>newaccount.balance;
    accounts.push_back(newaccount);

}

void Withdraw(){
    if(accounts.size()==0){
        cout<<"No account is Register Yet. "<<endl;
        return;
    }
    int acc;
    cout<<"Enter Account Number : ";
    cin>>acc;
    for(int i=0;i<accounts.size();i++){
        if(accounts[i].accountno==acc){
            int am;
            cout<<"Enter the amount To Withdraw : ";
            cin>>am;
            while(accounts[i].balance <am){
                cout<<"Entered ammount is more than Limit , Please try again..."<<endl;
                cout<<"Enter the amount To Withdraw : ";
                cin>>am;
            }
            accounts[i].balance-=am;
            cout<<"    Withdrawal Successful."<<endl;
            cout<<"    Your current Balance is "<<accounts[i].balance <<endl;
            return;
        }
        
        
        return;
    }
    cout<<"Your required is not Exist."<<endl;

}

void AccountDetail(){
    if(accounts.size()==0){
        cout<<"No account is Register Yet. "<<endl;
        return;
    }
    int acc;
    cout<<"Enter Account Number : ";
    cin>>acc;
    for(int i=0;i<accounts.size();i++){
        if(accounts[i].accountno==acc){
            cout<<"    **Account Detail**"<<endl;
            cout<<"    Account Number : "<<accounts[i].accountno<<endl;
            cout<<"    Name of Holder's : "<<accounts[i].name<<endl;
            cout<<"    Current Balance : "<<accounts[i].balance<<endl;
            return; 
        }
        
        
    }
    cout<<"Your required is not Exist."<<endl;
    return;
}

using namespace std;
int main(){
    int choice ;
    do{
        cout<<"\n******Bank Account******"<<endl;
        cout<<"1 - Deposit Money "<<endl;
        cout<<"2 - Withdraw Money "<<endl;
        cout<<"3 - Display Account Detail "<<endl;
        cout<<"0 - Exit "<<endl;
        cout<<"Enter YOUR choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Deposit(); break;
            case 2: Withdraw(); break;
            case 3: AccountDetail(); break;
            case 0: cout<<"      Exiting..."<<endl; break;
            default:cout<<"Wrong, Try Again."<<endl;
        }
    }
    while(choice != 0);

}