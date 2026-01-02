#include <iostream>
using namespace std;
int main(){
int n=5;

// pattern---01
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

// pattern--02
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<2*(j+1)<<" ";
    }
    cout<<endl;
}

return 0;
}