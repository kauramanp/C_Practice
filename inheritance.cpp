#include <iostream>
#include "classA.hpp"
using namespace std;


class Rectangle : private Sides{
    public:
    void setArea(int side){
        width = side;
    };
    int getArea(){
        return width*width;
    }
};
int main(){
    Rectangle rectangle;
    rectangle.setArea(10);
    cout<< "rectangle area "<<rectangle.getArea();
    return 0;
}