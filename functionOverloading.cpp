#include<iostream>
using namespace std;
class Calculate{
    public:
    int height;
    int width;
    float pi = 3.14;
    float calculateArea(int height, int width){
        return height*width;
    };
     float calculateArea(int height){
        return height*height;
    };

     float calculateArea(double height){
        return height*height;
    };
    float calculateArea(int width, double pi){
        return width*width*pi;
    };
};
int main(){
    Calculate calculate;
    cout<<calculate.calculateArea(2)<<endl;
    cout<<calculate.calculateArea(2,2)<<endl;
    cout<<calculate.calculateArea(2.12)<<endl;
    cout<<calculate.calculateArea(2, 3.14)<<endl;
}