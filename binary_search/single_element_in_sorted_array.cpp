#include <iostream>

#include <vector>
using namespace std;


int singleElementInSortedArrayUsingBruteForce(vector<int> arr){
    
   

 
    if(arr.size() == 1 || arr[0] != arr[1]){
        return arr[0];
    }

    for(int i = 1; i < arr.size() - 1; i++){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
            return arr[i];
        }
    }

   
    return arr[arr.size()-1];
}



int singleElementInSortedArrayUsingBinarySearch(vector<int> arr){
int st=0;
int end=arr.size()-1;
while(st<=end){
    int mid=st+(end-st)/2;

    if(mid==0&& arr[0]!=arr[1]){
        return arr[mid];
    }
    
    if(mid==end&& arr[end]!=arr[end-1]){
        return arr[mid];
    }
    if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
        return arr[mid];
    }
    if(mid%2==0){
        if(arr[mid]==arr[mid-1]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }else{
        if(arr[mid]==arr[mid+1]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
}
}
int main(){
vector<int> arr={1,1,2,3,3,4,4};

cout<<"the single element in sorted array is : "<<singleElementInSortedArrayUsingBruteForce(arr)<<endl;

cout<<"the single element in sorted array using binary search is : "<<singleElementInSortedArrayUsingBinarySearch(arr)<<endl;






    return 0;
}