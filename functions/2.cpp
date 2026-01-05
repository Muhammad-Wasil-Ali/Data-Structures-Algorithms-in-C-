#include <iostream>

using namespace std;
int calculateSum(int n){
    int sum=0;
   

    for(int i =0;i<=n;i++){
sum+=i;
    }

    return sum;
}
int main(){
cout<<calculateSum(5);

    return 0;
}