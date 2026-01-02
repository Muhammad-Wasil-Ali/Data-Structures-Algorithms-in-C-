#include <iostream>

using namespace std;
int main(){

    //  patterns with similar logic of characters and numbers

    // pattern--01
int n=4;
int number=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
cout<<number <<" ";
number+=1;
        }
        cout<<endl;
    }

// pattern ---02
     char a='A';
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
cout<<a <<" ";
a+=1;
        }
        cout<<endl;
    }
    return 0;
}