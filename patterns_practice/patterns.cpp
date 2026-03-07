#include <iostream>

using namespace std;

void rightAngleTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void invertedRightAngleTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pyramidPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

         for(int j=0;j<i+1;j++){
            cout<<"*";
        }

         for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void numberPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void reverseNumberPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}


int main(){
cout<<"Right angle trinangle "<<endl;
    rightAngleTriangle(5);

cout<<"Inverted right angle trinangle "<<endl;

 invertedRightAngleTriangle(5);


 cout<<"Pyramid trinangle "<<endl;

 pyramidPattern(5);


 cout<<"Number pattern "<<endl;

 numberPattern(5);

 cout<<"Reverse number pattern "<<endl;

 reverseNumberPattern(5);

    return 0;
}