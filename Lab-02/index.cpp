
#include <iostream>
using namespace std;
class student{
    private:
    int roll_no; 
    public:
    int getRollNo(){
        return roll_no;
    }
    void setRollNo(int i){
        roll_no=i;
    }
};
int main(){
    student A;
    A.setRollNo(23);
    cout<<"the private Roll No is : "<<A.getRollNo();
}