#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int start=0,end=arr.size()-1;

    while(start<=end){
        int mid =(start+end)/2;

        if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
vector<int> arr1={1,2,5,8,9,10,15};

vector<int> arr2={-4,-3,-1,0,7,8,9};


cout<<"The taret element is present on index "<<binarySearch(arr1,15);

    
    return 0;
}