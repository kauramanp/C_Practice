#include<iostream>
using namespace std;
// union studentUnion{
//    string studentName;
// };

int main(){
   union studentUnion;
   // studentUnion.studentName = "123";
   // cout<<"union student details "<<studentUnion.studentName<<endl;

    int a = 13; 
    int b = 0;

    for(int i =0;i<10;i++){
               cout << (int) rand()%10 << endl;
    };

   try{ 
      if(a>10){
         cout<<"correct";
      }else if(a>1 && a<3)
         throw 1;
         else if(a>3 && a<8)
         throw 2;
   }catch (int a) {  
      if(a == 1)
         cout << "In exception" << endl;  
         if(a == 2)
         cout << "IN exception" << endl;  
        
         else{
            cout<<"in second condition";
         }
   }  
}