#include <iostream>

using namespace std;

bool checkPrime(int n){
  if(n<=2){
        return false;
    }

    for (int i=2;i<n;i++){
        if(n%i==0){
           return false;
            break;
        }
    }

    return true;
}
int main(){
    int n=22;
if(checkPrime(n)){
    cout<<"The number is prime"<<endl;
}else{
    cout<<"Not prime";
}
  
    return 0;
}