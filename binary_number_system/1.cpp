#include <iostream>
using namespace std;

int decimalToBinary(int decimalNumber){
    int ans=0;
    int pow=1;
    while(decimalNumber>0){
        int remainder=decimalNumber%2;
        decimalNumber=decimalNumber/2;

        ans+=remainder*pow;
        pow*=10;
    }

    return ans;
}
int main(){
cout<<decimalToBinary(15);
    return 0;
}