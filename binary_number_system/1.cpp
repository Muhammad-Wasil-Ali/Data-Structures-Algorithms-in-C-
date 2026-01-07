#include <iostream>
using namespace std;


// this fucntion is able to convert the decimal number into binary number 

// e-g  12  to  1100
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

// this fucntion is able to convert the binary number into decimal number

// e-g  1100  to  12


int binaryToDecimal(int binaryNumber){
    int ans=0;
    int pow=1;
    while(binaryNumber>0){
        int remainder=binaryNumber%10;
        binaryNumber=binaryNumber/10;

        ans+=remainder*pow;
        pow*=2;
    }

    return ans;
}
int main(){
cout<<"Decimal to binary "<<decimalToBinary(15)<<endl;
cout<<"Binary to Decimal "<<binaryToDecimal(101)<<endl;

    return 0;
}