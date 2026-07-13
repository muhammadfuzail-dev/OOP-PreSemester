// Q2: Create a Function that takes two variables and swaps the elements between the variables 
// without using 3rd variable.
#include <iostream>
using namespace std;
void Swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
    int n1;
    int n2;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    Swap(n1,n2);
    cout<<n1<<endl;
    cout<<n2<<endl;
}