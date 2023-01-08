#include<iostream>
using namespace std;

class userInfo{
    public:
    int userId;
};
class Teacher;
class Student : public userInfo{
    public:
    int rollno;
    string name;
    Student(int rollno, string name){
        this->name = name;
        this->rollno = rollno;
    };
    friend void display(Student, Teacher);
};
class Teacher : public userInfo{
    public:
    int userId;
    string name;
    Teacher(int userId, string name){
        this->userId = userId;
    };
    friend void display(Student, Teacher);
};
void display(Student student, Teacher teacher){
    cout<<"student "<<student.name<<" teacher "<<teacher.name;

}
int main(){
    Student s1 = Student(1, "test");
    Student s2 = Student(2, "testing");
    Teacher t1 = Teacher(2, "testing teacher");
    display(s1, t1);
    return 0;
}