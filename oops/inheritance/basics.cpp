#include <iostream>

using namespace std;
class Vehicle{
    public:
    string brand;

    void honk(){
        cout<<"Rata tata ta tata ta"<<endl;
    }
};

class Car:public Vehicle{
public:
string model;
string name;
};
int main(){
Car obj1;

obj1.honk();
obj1.brand="suzuki";
obj1.name="cultus";
obj1.model="2019";

cout<<"The brand is : "<<obj1.brand<<endl;

cout<<"The car name  is : "<<obj1.name<<endl;
cout<<"The car model  is : "<<obj1.model<<endl;



    return 0;
}