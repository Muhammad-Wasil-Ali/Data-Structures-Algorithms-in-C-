#include <iostream>

#include <string>
using namespace std;
char firstNonRepeatingCharacter(string str){
int count[256]={0};

for (char a:str){
    count[a]++;
}

for(char a:str){
if(count[a]==1){
    
    return a;
}
}

}
int main(){

    string s="hello world to house";

    cout<<firstNonRepeatingCharacter(s);
    return 0;
}