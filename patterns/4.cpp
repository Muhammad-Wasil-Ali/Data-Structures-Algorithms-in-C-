#include <iostream>

using namespace std;
int main(){
    // Inverted patterns

    // pattern --- 01

    int n=5;

    cout<<"Pattern ---- 01";
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }


     // pattern --- 02
 cout<<"Pattern ---- 02";
    char a='A';
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<a;
        }
        a=a+1;
        cout<<endl;
    }
return 0;
}