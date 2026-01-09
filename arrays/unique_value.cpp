#include <iostream>

using namespace std;

int main(){

    int arr[]={1,2,2,3,4,4,4,4};
int size=sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count==1){
            cout<<arr[i]<<" ";
        }else{
            count=0;
        }
    }
    return 0;
}