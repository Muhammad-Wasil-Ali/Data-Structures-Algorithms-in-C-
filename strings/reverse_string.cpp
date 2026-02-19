#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string reverseString(string str){
    string revStr="";
    for(int i=str.length()-1;i>=0;i--){
            revStr+=str[i];
    }

    return revStr;
}
int main(){

    string str="Assalam-O-Alaikum";
    

    
    

  
    cout<<reverseString(str)<<endl;


    return 0;
}