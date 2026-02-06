#include <iostream>
#include <vector>
using namespace std;


// finding target sum using brute force O(n square)
vector<int> printSum(int target,vector<int> arr){
    vector<int> ans;
    
    for(int i =0;i<arr.size();i++){
        for (int j=i+1;j<arr.size();j++){

            if(arr[i]+arr[j]==target){
                
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                
                return ans;
            }
        }

    }
    return ans;
}


// finding target sum in optimal way O(n)

vector<int> optimalTargetSum(int target,vector<int> arr){
    vector<int> ans;
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }
    return ans;
}

int main(){

    vector<int> arr={1,2,3,4,5};
    vector<int> bruteForceResult= printSum(7,arr);

    vector<int> optimalResult= optimalTargetSum(7,arr);


   cout<<"Brute force result"<<endl;
    cout<<bruteForceResult[0]<<" " <<bruteForceResult[1]<<endl;
   cout<<"Optimal result"<<endl;

    cout<<optimalResult[0]<<" " <<optimalResult[1]<<endl;

    return 0;
}
