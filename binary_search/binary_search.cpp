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

int recursiveBinarySearch(vector<int> arr,int target,int start,int end){
if(start<=end){
    
    
    int mid=(start+end)/2;
   
   if(target>arr[mid]){
    return recursiveBinarySearch(arr,target,mid+1,end);
   }else if(target<arr[mid]){
    return recursiveBinarySearch(arr,target,start,mid-1);
   }
   else{
    return mid;
   }
}
return -1;
}
int main(){
vector<int> arr1={1,2,5,8,9,10,15};

vector<int> arr2={-4,-3,-1,0,7,8,9};


cout<<"The taret element is present on index "<<binarySearch(arr1,2)<<endl;


cout<<"The target element using recursiveBinarySearch is present on index "<<recursiveBinarySearch(arr1,2,0,arr1.size()-1);



    
    return 0;
}