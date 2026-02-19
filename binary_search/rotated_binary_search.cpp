#include <iostream>

#include <vector>

using namespace std;

int rotatedBinarySearch(vector<int> arr,int target){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
int mid=(st+end)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(arr[st]<arr[mid]){
            if(arr[st]<=target&&target<=arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(arr[mid]<=target && target<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
}
int main(){

    vector<int> arr={3,4,5,6,7,0,1,2};

    cout<<"The target element is on index "<<rotatedBinarySearch(arr,4);

    return 0;
}
