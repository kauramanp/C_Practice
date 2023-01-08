#include<iostream>
using namespace std;

class Date{
    public: 
    int month;
    int day;
    bool appoint[48];

    void setDate(int month, int day, int index, bool isSelected){
        if(!isValid(month, day)){
            cout<<"Invalid date";
        }else
      {  this->month = month;
        this->day = day;
        this->appoint[index] = isSelected;}
    };

    void getDate(int month, int year){

    }

    bool isValid(int month, int year){
        if((month>5 || month <9) && (day >12 ))
    }
};
int main(){
    date
}