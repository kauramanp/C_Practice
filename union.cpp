#include<iostream>

using namespace std;
union StudentUnion {
    int rollno;
    char name;
    float roll;
};
 
// Driver Code
int main()
{
    // Initializing Union
    union StudentUnion student;
 
    student.rollno = 1;
        cout<<"student rollno "<<student.rollno<<" student name "<<student.name <<" student roll "<<student.roll;

    student.name = 'A';
    student.roll = 0.2;
    cout<<"student rollno "<<student.rollno<<" student name "<<student.name <<" student roll "<<student.roll;
    return 0;
}