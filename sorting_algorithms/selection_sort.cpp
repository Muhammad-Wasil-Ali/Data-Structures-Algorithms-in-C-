#include <iostream>

using namespace std;


int selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
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

    selectionSort(arr,n);

    printArray(arr,n);
    return 0;
}