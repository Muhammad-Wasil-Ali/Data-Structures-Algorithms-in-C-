#include <iostream>

#include <string>

using namespace std;
bool checkStringAnagram(string str1,string str2){
if(str1.length()!=str2.length()) return false;
    int count[26]={0};
    for(char a:str1){
        count[a-'a']++;
    }

    for(char a:str2){
        count[a-'a']--;
    }

    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }

    return true;
}
int main(){

    string str1="listen";
    string str2="silen";

    bool result=checkStringAnagram(str1,str2);

    if(result){
        cout<<"Yes the given string is anagram ";
    }else{
        cout<<"No the given string is not anagram";
    }

   
    return 0;
}