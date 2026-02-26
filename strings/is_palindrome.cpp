#include <iostream>
#include <string>
using namespace std;

string isPalindrome(string str){
    string revStr="";
    
    for(int i=str.length()-1; i>=0; i--){
        revStr+=str[i];
    }
    return revStr;
}

int main(){
    string str="dad";
    cout<<"Original: "<<str<<endl;
    cout<<"Reversed: "<<isPalindrome(str)<<endl;
    
    if(str==isPalindrome(str)){
        cout<<str<<" - yes the string is palindrome"<<endl;
    }else{
        cout<<str<<" - no the string is not palindrome"<<endl;
    }
    return 0;
}