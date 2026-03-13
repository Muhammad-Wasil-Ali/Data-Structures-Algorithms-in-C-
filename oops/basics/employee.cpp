#include <iostream>
using namespace std;

class Employee{
private:
    double salary;
    double bonus;

public:

    // Constructor
    Employee(double s, double b){
        salary = s;
        bonus = b;
    }

    // Function to calculate total salary
    double totalSalary(){
        return salary + bonus;
    }

    void display(){
        cout<<"Salary: "<<salary<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total Salary: "<<totalSalary()<<endl;
    }
};

int main(){

    Employee e1(50000, 5000);

    e1.display();

    return 0;
}