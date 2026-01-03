#include <iostream>
using namespace std;
int main(){
int n=5;

// pattern---01
cout<<"Pattern ----- 01"<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
}

// pattern--02
cout<<"Pattern ----- 02"<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<(j+1)<<" ";
    }
    cout<<endl;
}

// pattern--03

cout<<"Pattern ----- 03"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}


// pattern--04
char ch='A';
cout<<"Pattern ----- 04"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<ch<<" ";
    }
    ch+=1;
    cout<<endl;
}

// pattern--05
cout<<"Pattern ----- 05"<<endl;

for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
// pattern--05

cout<<"Pattern ----- 06"<<endl;
int number=1;
for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<number<<" ";
        number+=1;
    }

    cout<<endl;
}
return 0;
}


