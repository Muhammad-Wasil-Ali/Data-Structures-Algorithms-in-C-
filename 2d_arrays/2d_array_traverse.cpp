#include <iostream>
using namespace std;

int main(){

    int rows=3,cols=4;

    int arr1[rows][cols]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    int top=0,right=3,bottom=2,left=0;

   while(top<=bottom && left<=right){

    for(int i=left;i<=right;i++)
        cout<<arr1[top][i]<<" ";
    top++;

    for(int i=top;i<=bottom;i++)
        cout<<arr1[i][right]<<" ";
    right--;

    if(top<=bottom){
        for(int i=right;i>=left;i--)
            cout<<arr1[bottom][i]<<" ";
        bottom--;
    }

    if(left<=right){
        for(int i=bottom;i>=top;i--)
            cout<<arr1[i][left]<<" ";
        left++;
    }
}
    return 0;
}