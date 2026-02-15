#include <iostream>

#include <vector>
using namespace std;

int singleElementInSortedArray(vector<int> arr){
    int count=0;

    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<"i : "<<i<<endl;
        

        for(int j=0;j<arr.size();j++){
            cout<<"j : "<<j<<endl;
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

int main(){
vector<int> arr={1,1,1,2,2,3,3,4};

cout<<"the single element in sorted array is : "<<singleElementInSortedArray(arr)<<endl;





    return 0;
}