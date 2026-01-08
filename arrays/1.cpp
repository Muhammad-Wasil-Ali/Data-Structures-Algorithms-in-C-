#include <iostream>
using namespace std;

int findMax(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
largest=max(arr[i],largest);
}
return largest;
}
int findMin(int arr[],int size){
    int smallest=arr[0];
    for(int i=0;i<size;i++){
smallest=min(arr[i],smallest);
}
return smallest;
}
int main(){
    

    int size=6;
    int arr[6]={1,2,3,4,5,-10};
cout<<findMin(arr,size);
cout<<endl;
cout<<findMax(arr,size);
   
    return 0;
}