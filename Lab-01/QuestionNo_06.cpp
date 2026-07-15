/*6: Design a C++ program to manage student information for a school. Create a structure 
named Student with attributes for 
1. student ID 
2. name, and 
3. marks in three subjects. 
Implement functions to input data, calculate the average marks, and display student details. 
*/
#include <iostream>         
#include <vector>         
#include <string>
using namespace std;

struct Student{
    int studentID;
    string name;
        int sub1;
        int sub2;
        int sub3;
};
vector<Student> students;

void input_record(){
    Student new_student;
    cout<<"Enter the record."<<endl;
    cout<<"Enter Student ID here : ";
    cin>>new_student.studentID;
    cout<<"Enter Student's  Name : ";
    cin.ignore();
    getline(cin,new_student.name);
    cout<<"Enter Subject-1 marks : ";
    cin>>new_student.sub1;
    cout<<"Enter Subject-2 marks : ";
    cin>>new_student.sub2;
    cout<<"Enter Subject-3 marks : ";
    cin>>new_student.sub3;

    students.push_back(new_student);
    return;

}

void calculate_avg(){
    int id;
    double avg;
    cout<<"Enter student ID : ";
    cin>>id;
    for(int i=0;i<students.size();i++){
        if(students[i].studentID==id){
            // cout<<"The Student ID     : "<<students[i].studentID<<endl;
            // cout<<"The Student's Name : "<<students[i].name<<endl;
            // cout<<"Marks in Subject 1 : "<<students[i].sub1<<endl;
            // cout<<"Marks in Subject 2 : "<<students[i].sub2<<endl;
            // cout<<"Marks in Subject 3 : "<<students[i].sub3<<endl;
            avg=(students[i].sub1+students[i].sub2+students[i].sub3)/3.0;
            cout<<"The Average Marks  : "<<avg<<endl;
            return;
        }
    }
    cout<<"No Data is avilable"<<endl;
}

void display_details(){
    int id;
    double avg;
    cout<<"Enter student ID : ";
    cin>>id;
    for(int i=0;i<students.size();i++){
        if(students[i].studentID==id){
            cout<<"The Student ID     : "<<students[i].studentID<<endl;
            cout<<"The Student's Name : "<<students[i].name<<endl;
            cout<<"Marks in Subject 1 : "<<students[i].sub1<<endl;
            cout<<"Marks in Subject 2 : "<<students[i].sub2<<endl;
            cout<<"Marks in Subject 3 : "<<students[i].sub3<<endl;
            avg=(students[i].sub1+students[i].sub2+students[i].sub3)/3.0;
            cout<<"The Average Marks  : "<<avg<<endl;
            return;
        }
    }
    cout<<"No Data is avilable"<<endl;
}



int main(){
    int choice;
    do{
        cout<<"***Student Information***"<<endl;
        cout<<"1 - Input Data of a Student."<<endl;
        cout<<"2 - calculate the Average Marks."<<endl;
        cout<<"3 - Display student Details."<<endl;
        cout<<"0 - Exit..."<<endl;
        cout<<"Enter your Choice : ";
        cin>>choice;
        switch(choice){
            case 1: input_record(); break;
            case 2: calculate_avg(); break;
            case 3: display_details(); break;
            case 0: cout<<"Exiting..."; break;
            default: cout<<"Invalid Choice,Try Again"<<endl;
        }
    }
    while(choice!=0);
    return 0;
}