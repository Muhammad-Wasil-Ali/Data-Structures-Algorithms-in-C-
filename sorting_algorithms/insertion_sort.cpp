#include <iostream>

using namespace std;


int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0&&arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
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

    insertionSort(arr,n);

    printArray(arr,n);
    return 0;
}