/*
 02 A medical lab maintains patient records where each patient has a unique ID, name, and a dynamically allocated array storing their recent test results. When a patient’s record is duplicated for analysis, a copy must be made so that the test results remain independent between copies. Your task is to develop a system where: e A Patient class stores details including an ID, name, and an array of test results. e A copy constructor should be implemented. e A function should allow displaying patient details, including their test results. Develop a program that creates patient records, makes a copy of a patient for further analysis, and displays their details. Instructor: Talha Shahid 1|Page*/
#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int id;
    string name;
    int *results;
    int size;

public:

    // Constructor
    Patient(int i, string n, int s)
    {
        id = i;
        name = n;
        size = s;

        results = new int[size];
    }

    // Input Results
    void inputResults()
    {
        cout << "Enter " << size << " test results:\n";

        for(int i=0;i<size;i++)
        {
            cin >> results[i];
        }
    }

    // Copy Constructor (Deep Copy)
    Patient(const Patient &other)
    {
        id = other.id;
        name = other.name;
        size = other.size;

        results = new int[size];

        for(int i=0;i<size;i++)
        {
            results[i] = other.results[i];
        }
    }

    // Display
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Results: ";

        for(int i=0;i<size;i++)
        {
            cout << results[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Patient()
    {
        delete[] results;
    }
};

int main()
{
    Patient p1(101, "Ali", 3);

    p1.inputResults();

    Patient p2 = p1;

    cout << "\nOriginal Patient\n";
    p1.display();

    cout << "\nCopied Patient\n";
    p2.display();

    return 0;
}