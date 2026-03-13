#include <iostream>

using namespace std;
class Reactangle{

    public:
    int length;
    int width;

    Reactangle(int length,int width){
this->length=length;
this->width=width;
    }

    int calculateArea(){
        return length*width;
    }

    int calulatePerimeter(){
        return 2*(length+width);
    }
};
int main(){
    Reactangle r1(5,7);
    cout<<"Area of rectangle is : "<<r1.calculateArea()<<endl;
    cout<<"Perimeter of rectangle is : "<<r1.calulatePerimeter()<<endl;

    return 0;
}