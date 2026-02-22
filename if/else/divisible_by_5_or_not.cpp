#include <iostream>
using namespace std;
int main(){

   int number=15;

   if(number%5==0){
    cout<<"The number is divisble by 5";
   }
   else if(number%11==0){
     cout<<"The number is divisble by 11";
   }else{
     cout<<"The number is neither divisble by 5 nor by 11";
   }
    return 0;
}