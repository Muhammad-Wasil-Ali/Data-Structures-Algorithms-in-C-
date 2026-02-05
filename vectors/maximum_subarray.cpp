#include <iostream>

using namespace std;

int main(){
    int arr[4]={5,-4,1,-2};
    int size=sizeof(arr)/4;

    int max_sum=INT8_MIN;

    // Using brute force  Time complexity is O(n cube)
    // for(int start=0;start<size;start++){
    //     for(int end=start;end<size;end++){
    //         int currentSum=0;
    //         for(int i=start;i<=end;i++){
    //             currentSum+=arr[i];
    //             max_sum=max(currentSum,max_sum);
    //         }
            
    //     }
        
    // }

    // Optimized brute force  Time complexity is O(n square)

    // for(int start=0;start<size;start++){
    //     int currentSum=0;
    //     for(int end=start;end<size;end++){
    //        currentSum+=arr[end];
    //        max_sum=max(currentSum,max_sum);
    //     }
       
    // }

    // Kadane's algorithm Time complexity is O(n)
int currentSum=0;
    for(int i=0;i<size;i++){
        currentSum+=arr[i];
        max_sum=max(max_sum,currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }

    cout<<(max_sum);
    return 0;
}