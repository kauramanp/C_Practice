#include<iostream>
using namespace std;

  class Student{
        public:
        int rollno;
        string name;
        Student(){
            cout<<"Empty constructor"<<endl;
        }
        // Student(int rollNo, string name){
        //     this->name = name;
        //     cout<<"constructor "<<rollNo<<" name "<<this->name<<endl;
        // };

    };

int main(){
    int a;
    Student studentEmpty;
    // Student student = Student(1, "Testing name");
    // cout<<"student name "<<student.name<<endl;
    // cout<<"Student class "<<student.rollno<<endl;
    cout<<"Enter number ";
    cin>>a;
    cout<<"int(a) "<<int(a);

     char alphabet=char(65); 
  cout<<alphabet;
  cout<<"alphabet "<<alphabet;
  int starting = 65;
  for(int i =0; i< 5; i++){
      for(int j  = 0; j<i;j++){
          cout<<char(alphabet);
          alphabet++;
      }
      cout<<endl;
  }
    for(int i=0;i<a;i++){
        for(int j = 0;j<a;j++){
            if(i == 0 || i == (a-1) || j == 0 || j == (a-1)){
                cout<<"*";
            }else if(i == j){
                cout<<"*";
            }  else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}