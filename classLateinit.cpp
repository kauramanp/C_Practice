#include <iostream>  
using namespace std;  
class B;          // forward declarartion.  
class A  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }       // friend function.  
};  
class B  
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }                     // friend function  
}; 
   int main()  
{  
   A a;  
   B b;  
   a.setdata(10);  
   b.setdata(20);  
    return 0;  
 }  