#include <iostream>


using namespace std;


int linearSearch(int arr[],int target,int size){

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
int size=5;
    int arr[size]={3,5,1,9,7};
int target=1;
int foundEl=linearSearch(arr,target,size);
if(foundEl!=-1){
cout<<target<<" is found on index "<<foundEl;
}else{
 cout<<target<<" not found in a give array";   
}
    
    return 0;
}