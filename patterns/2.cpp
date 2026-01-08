#include <iostream>
using namespace std;
int main(){

    int n=6;

    //  patterns with similar logic of characters and numbers

    // pattern---01
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

// pattern---02
    for(int i=0;i<n;i++){
        char a='A';
        for(int j=0;j<n;j++){
            cout<<a<<" ";
            a+=1;
        }
        cout<<endl;
    }
  
    return 0;
}