#include <iostream>

using namespace std;

int checkPalindrome(int n){
   
    int ans=0;
    while(n>0){
        int rev=n%10;
        n=n/10;

        ans=ans*10+rev;
    }

    return ans;
}
int main(){
int n=120;

int result=checkPalindrome(n);

if(result==n){
    cout<<"Yes "<<n<<" is palindrome"<<endl;
}else{
    cout<<"No "<<n<<" is not palindrome"<<endl;

}

    return 0;
}