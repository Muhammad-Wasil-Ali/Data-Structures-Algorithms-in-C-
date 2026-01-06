#include <iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int k=i+1;k>0;k--){
            cout<<k;
        }

        for(int l=1;l<=i;l++){
cout<<l+1;
        }
        cout<<endl;
    }
}