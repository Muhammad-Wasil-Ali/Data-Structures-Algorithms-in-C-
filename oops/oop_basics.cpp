#include <iostream>

using namespace std;

class Car{
public:
string color;
string model;
int speed;

void carDetails(){
    cout<<"The color of car is "<<color<<endl;
    cout<<"The model of car is "<<model<<endl;
    cout<<"The speed of car is "<<speed<<endl;

}
};
int main(){

    Car myCar;

    myCar.color="black";
    myCar.model="2026";
    myCar.speed=320;

    myCar.carDetails();



    return 0;
}