#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str="Hello ";
    str+="world";

    
    string newStr=str.substr(0,3);
    cout<<"The size of str is : "<<str.length()<<endl;

    

  
    cout<<newStr<<endl;


    return 0;
}