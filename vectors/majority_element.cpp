#include <iostream>
#include <vector>
using namespace std;


// finding majority element using brute force method 

int majorityElementUsingBruteForce(vector<int> arr){
    int n=arr.size();
    for(int val : arr){
        int freq=0;
        for(int el:arr){
            if(val==el){
                freq++;
            }
        }
        if(freq>n/2){
            
            return val;
        }
    }
    return -1;
}

// using optimal method

int majorityElementUsingOptimal(vector<int> arr){
    int ans=arr[0];
    int freq=1;
    for(int val=1;val<arr.size();val++){

        if(arr[val]==arr[val-1]){
            freq++;
        }else{
            freq=0;
            ans=arr[val];
        }

        if(val>arr.size()/2){
            return ans;
        }
    }
}
int main(){
    vector<int> arr1={1,2,1,4,2,2,2};
vector<int> arr2={1,1,1,1,1,1,4,4,4,4,4,4};
    cout<<majorityElementUsingBruteForce(arr1);
    cout<<majorityElementUsingOptimal(arr2);

    return 0;
}
