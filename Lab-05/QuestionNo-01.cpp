#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string registrationNo;
    string model;
    string owner;

public:

    // Constructor
    Car(string reg, string mod, string own)
    {
        registrationNo = reg;
        model = mod;
        owner = own;
    }

    // Copy Constructor
    Car(const Car &other)
    {
        registrationNo = other.registrationNo;
        model = other.model;
        owner = other.owner;
    }

    // Change Owner
    void setOwner(string newOwner)
    {
        owner = newOwner;
    }

    // Display
    void display()
    {
        cout << "Registration: " << registrationNo << endl;
        cout << "Model: " << model << endl;
        cout << "Owner: " << owner << endl;
    }
};

int main()
{
    Car car1("ABC123", "Toyota Corolla", "Ali");

    Car car2 = car1;

    car2.setOwner("Ahmed");

    cout << "Original Car\n";
    car1.display();

    cout << "\nCopied Car\n";
    car2.display();

    return 0;
}