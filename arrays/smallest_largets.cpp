#include <iostream>

using namespace std;

int main(){
int size=7;
    int arr[size]={1,2,7,3,0,
    9,11};


    int smallest=INT32_MIN;
    int largest=INT32_MIN;

    

    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
 if(smallest<arr[i]){
    smallest=arr[i];
   
}
        
    }

    cout<<largest<<endl;
    cout<<smallest<<endl;

    return 0;
}