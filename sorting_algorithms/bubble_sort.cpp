#include <iostream>

using namespace std;


int bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){

    int arr[]={5,6,3,4,9,1};
    int n=6;

    bubbleSort(arr,n);

    printArray(arr,n);
    return 0;
}