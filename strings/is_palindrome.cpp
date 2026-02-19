#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Method 1: Using string reversal (current)
string reverseString(string str){
    string revStr="";
    for(int i=str.length()-1; i>=0; i--){
        revStr+=str[i];
    }
    return revStr;
}

// Method 2: Two-pointer approach (Most efficient - O(n/2) comparisons)
bool isPalindromePointers(string str){
    int left = 0;
    int right = str.length() - 1;
    
    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Method 3: Recursive approach
bool isPalindromeRecursive(string str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    return isPalindromeRecursive(str, start+1, end-1);
}

// Method 4: Using built-in reverse() function
bool isPalindromeBuiltIn(string str){
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    return str == revStr;
}

int main(){
    string str="dad";
    
    cout<<"=== Testing: \""<<str<<"\" ===="<<endl<<endl;
    
    // Method 1
    cout<<"Method 1 (Reversal): ";
    if(str == reverseString(str)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    
    // Method 2
    cout<<"Method 2 (Two-pointer): ";
    if(isPalindromePointers(str)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    
    // Method 3
    cout<<"Method 3 (Recursive): ";
    if(isPalindromeRecursive(str, 0, str.length()-1)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    
    // Method 4
    cout<<"Method 4 (Built-in reverse): ";
    if(isPalindromeBuiltIn(str)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    
    return 0;
}