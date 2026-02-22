#include <iostream>
using namespace std;
int main(){

    int a=10,b=20,c=-30;

    if(a>b&&a>c){
        cout<<a<<" is largest number";
    }else if(b>a && b>c){
        cout<<b<<" is the largest number";
    }else{
        cout<<c<<" is the largest number";

    }
    return 0;
}