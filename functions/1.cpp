#include <iostream>

using namespace std;
int calculateFactorial(int n){
    int fact=1;
   

    for(int i =n;i>0;i--){
fact*=i;
    }

    return fact;
}
int main(){
cout<<calculateFactorial(5);

    return 0;
}