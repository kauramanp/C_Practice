#include<iostream>
using namespace std;
class Address;
class StudentClass{
    public:
    string classname;
    int floor;
    int block;
};
class Student : public StudentClass{
    public:
    string studentName;
    void displayStudentInfo(){
        cout<<"name "<<studentName;
        <<" block "<<block;
    }
};
 class Address{
    public:
    int houseNumber;
    string address;
};

int main(){
    Student student = Student();
    student.classname = "C++";
    student.block = 1;
    student.displayStudentInfo();
    return 1;
    
}
