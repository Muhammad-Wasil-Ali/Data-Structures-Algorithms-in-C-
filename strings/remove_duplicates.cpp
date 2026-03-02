#include <iostream>

#include <string>
#include <algorithm>
using namespace std;

string removeDuplicates(string str){
string result="";
    for(int i=0;i<str.length();i++){
        if(result.find(str[i])==string::npos){
result+=str[i];
        }
    }

    return result;
}

int main(){

    string s="hello world";

   

    cout<< removeDuplicates(s)<<endl;
    return 0;
}