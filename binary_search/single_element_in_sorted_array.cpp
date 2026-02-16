#include <iostream>

#include <vector>
using namespace std;

int singleElementInSortedArrayUsingBruteForce(vector<int> arr){
    int count=0;

    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
    
        

        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count==1){
            return arr[i];
        }else{
            count=0;
        }
    }
}


int singleElementInSortedArrayUsingBinarySearch(vector<int> arr){
int st=0;
int end=arr.size()-1;
while(st<=end){
    int mid=st+(end-st)/2;

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