/*Question # 02: 
You are tasked with implementing a School Management System in C++. The system should be able to 
manage information about students, teachers, and courses. Each student has attributes such as student 
ID, name, age, and grade. Teachers have attributes like teacher ID, name, and subject taught. Courses 
are identified by a course code, name, and the teacher who conducts the course. 
Implement the following classes: 
1. Student class with the following attributes: 
• Student ID (integer) 
• Name (string) 
• Age (integer) 
• Grade (char) 
Include setter and getter functions for each attribute. Implement a function displayStudentInfo() to 
display the student's information. 
2. Teacher class with the following attributes: 
• Teacher ID (integer) 
• Name (string) 
• Subject Taught (string) 
Include setter and getter functions for each attribute. Implement a function displayTeacherInfo() to 
display the teacher's information. 
3. Course class with the following attributes: 
• Course Code (string) 
• Course Name (string) 
• Teacher (an instance of the Teacher class) 
Include setter and getter functions for each attribute. Implement a function displayCourseInfo() to 
display the course information. 
4. SchoolManagementSystem class to manage students, teachers, and courses. Include the following 
functions: 
• addStudent(const Student& newStudent): Adds a new student to the system. 
• addTeacher(const Teacher& newTeacher): Adds a new teacher to the system. 
• addCourse(const Course& newCourse): Adds a new course to the system. 
• displayAllStudents(): Displays information for all students in the system. 
• displayAllTeachers(): Displays information for all teachers in the system. 
• displayAllCourses(): Displays information for all courses in the system. 
Implement the solution in C++ using setter and getter functions for each class. */
#include <iostream>
#include <vector> 
using namespace std;

class Student{
    string studentID;
    string name;
    int age;
    char grade;
    public:
    void setstudentID(string i){
        studentID=i;
    }
    void setname(string i){
        name=i;
    }
    void setage(int i){
        age=i;
    }
    void setgrade(char i){
        grade=i;
    }
    string getstudentId(){
        return studentID;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    char getgrade(){
        return grade;
    }

    void displayStudentInfo(){
        cout<<"Student's Id is      : "<<studentID<<endl;
        cout<<"Student's Name is    : "<<name<<endl;
        cout<<"Student's Age is     : "<<age<<endl;
        cout<<"Student's Grade is   : "<<grade<<endl;
    }
};

class Teacher{
    int teacherID;
    string name;
    string subject;
    public:

    //Setter functions 
    void setteacherID(int i){ teacherID=i; }
    void setname(string i){ name=i; }
    void setsubject(string i){ subject=i; }

    //Getter functions 
    int getteacherID(){ return teacherID; }
    string getname(){ return name; }
    string getsubject(){ return subject; }
    void displayTeacherInfo(){
        cout<<"Teacher's ID is      : "<<teacherID<<endl;
        cout<<"Teacher's name is    : "<<name<<endl;
        cout<<"Teacher's subject is : "<<subject<<endl;
    }
};
class Course{
    string code;
    string name;
    Teacher teacher;
    public:

    //setter functions 
    void setcode(string i){ code=i; }
    void setname(string i){ name=i; }
    void setteacher(Teacher t){ teacher=t; }

    //getter functions 
    string getcode(){ return code; }
    string getname(){ return name; }
    Teacher getteacher(){ return teacher; }
    void displayCourseInfo(){
        cout<<"Course code  is      : "<<code<<endl;
        cout<<"Course name  is      : "<<name<<endl;
        teacher.displayTeacherInfo();
    }
};
class SchoolManagementSystem{
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Course> courses;
    public:
    void addStudent(const Student& newStudent){
        students.push_back(newStudent);
    }
    void addTeacher(const Teacher& newTeacher){
        teachers.push_back(newTeacher);
    }
    void addCourse(const Course& newCourse){
        courses.push_back( newCourse);
    }
    void displayAllstudents(){
        for(int i =0;i<students.size();i++){
            students[i].displayStudentInfo();
        }
    }
    void displayAllTeachers(){
        for(int i=0;i<teachers.size();i++){
            teachers[i].displayTeacherInfo();
        }
    }
    void displayAllCourses(){
        for(int i=0;i<courses.size();i++){
            courses[i].displayCourseInfo();
        }
    }
};
int main(){
    Student s1;
    s1.setstudentID("BCSF25M037.");
    s1.setname("Muhammad Fuzail.");
    s1.setage(19);
    s1.setgrade('A');
    Teacher t1;
    t1.setteacherID(100);
    t1.setname("Dr Nazar Khan.");
    t1.setsubject("Computer Science.");
    Course c1;
    c1.setcode("M065");
    c1.setname("Object Oriented Programming.");
    c1.setteacher(t1);
    SchoolManagementSystem sms;
    sms.addStudent(s1);
    sms.addTeacher(t1);
    sms.addCourse(c1);
    sms.displayAllstudents();
    sms.displayAllTeachers();
    sms.displayAllCourses();
    return 0;
}