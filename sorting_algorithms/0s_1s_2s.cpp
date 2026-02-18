#include <iostream>
#include <vector>
using namespace std;

void sort0s1s2s(vector<int> &arr){

    int count0=0,count1=0,count2=0;

    for(int i =0; i<arr.size();i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }
int idx=0;
    for(int i=0;i<count0;i++){
        arr[idx]=0;;
        idx++;
    }

     for(int i=0;i<count1;i++){
        arr[idx]=1;
        idx++;
    }

     for(int i=0;i<count2;i++){
        arr[idx]=2;
        idx++;
    }

}

void printArray(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){

    vector<int> arr={1,2,1,0,1,0,2,0,1};

    sort0s1s2s(arr);
    printArray(arr,arr.size());
    return 0;
}