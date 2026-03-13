#include <iostream>
using namespace std;

class Car{
private:
    string brand;
    bool isRunning;

public:

    // Constructor
    Car(string b){
        brand = b;
        isRunning = false;
    }

    void start(){
        isRunning = true;
        cout << brand << " car started." << endl;
    }

    void stop(){
        isRunning = false;
        cout << brand << " car stopped." << endl;
    }

    void displayInfo(){
        cout << "Car Brand: " << brand << endl;
        cout << "Status: ";
        
        if(isRunning)
            cout << "Running" << endl;
        else
            cout << "Stopped" << endl;
    }
};

int main(){

    Car c1("Toyota");

    c1.displayInfo();
    c1.start();
    c1.displayInfo();
    c1.stop();
    c1.displayInfo();

    return 0;
}