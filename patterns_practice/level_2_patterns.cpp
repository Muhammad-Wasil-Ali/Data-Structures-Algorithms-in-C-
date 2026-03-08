#include <iostream>

using namespace std;


void hollowSquarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1){
                cout<<"*";
            }else{
                if(j==0||j==n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}


void diagonaPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1){
                cout<<"*";
            }else{
               
                    cout<<" ";
                
            }
        }

       
        cout<<endl;
    }

   
}
int main(){

hollowSquarePattern(5);

diagonaPattern(5);
    return 0;
}