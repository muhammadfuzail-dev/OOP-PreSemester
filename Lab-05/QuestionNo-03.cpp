#include <iostream>
#include <string>
using namespace std;

class Professor
{
private:
    string name;
    string department;

public:
    Professor(string n, string d)
    {
        name = n;
        department = d;
    }

    void display()
    {
        cout << "Professor: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class University
{
private:
    string universityName;

    Professor* professors[10];

    int totalProfessors;

public:

    University(string name)
    {
        universityName = name;
        totalProfessors = 0;
    }

    void addProfessor(Professor *p)
    {
        professors[totalProfessors] = p;
        totalProfessors++;
    }

    void display()
    {
        cout << "\nUniversity: " << universityName << endl;
        cout << "Professors\n\n";

        for(int i=0;i<totalProfessors;i++)
        {
            professors[i]->display();
            cout << endl;
        }
    }
};

int main()
{
    Professor p1("Talha Shahid","Computer Science");

    Professor p2("Ali","AI & DS");

    Professor p3("Ahmed","Software Engineering");

    University u("Punjab University College of Information Technology (PUCIT)");

    u.addProfessor(&p1);
    u.addProfessor(&p2);
    u.addProfessor(&p3);

    u.display();

    return 0;
}