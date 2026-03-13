#include <iostream>

using namespace std;
class Bank{
    public:
double balance;

void withdraw(double money){
    if(money<=0 || money>balance){
        cout<<"Insufficient balance or enter money grater than 0"<<endl;
        return;
    }
    balance-=money;
    
}

void depositMoney(double money){
    if(money<=0 ){
        cout<<"Insufficient balance or enter money grater than 0"<<endl;
        return;
    }
    balance+=money;
    
}

void displayInfo(){
    cout<<"Your  balance is : "<<balance<<endl;
}


};
int main(){
    Bank b1;
    b1.balance=2000;

    b1.withdraw(-500);
    b1.displayInfo();

    return 0;
}