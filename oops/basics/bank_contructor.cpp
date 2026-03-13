#include <iostream>

using namespace std;

class Bank{
private:
double balance;


    public:
Bank(double balance){
    this->balance=balance;
    
}
void withdraw(double money){
    if(money<0 || money>balance){
        cout<<"Insufficient balance or enter money grater than 0"<<endl;
        return;
    }
    balance-=money;
    
}

void depositMoney(double money){
    if(money<0 ){
        cout<<"Insufficient balance or enter money grater than 0"<<endl;
        return;
    }
    balance+=money;
    
}

void displayInfo(){
    cout<<"Your remaining balance is : "<<balance<<endl;
}

};
int main(){

    Bank b1(2000);
    b1.withdraw(400);
    b1.displayInfo();
    b1.depositMoney(1000);
    b1.displayInfo();
    return 0;
}