#include <iostream>
#include <vector>
using namespace std;


int peakIndexValue(vector<int> arr){

int st=0;
int end=arr.size()-1;

while(st<=end){
    int mid= (st+end)/2;

    if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
        return mid;
    }else if(arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1]){
        st=mid+1;
    }else if(arr[mid-1]>arr[mid]&&arr[mid]>arr[mid+1]){
        end=mid-1;
    }else{
        return -1;
    }
}

}
int main(){

    vector<int> arr={0,3,23,20,12,8,7,2};

    cout<<"The peak index value is on index  : "<<arr[peakIndexValue(arr)]<<endl;
    return 0;
}