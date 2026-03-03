#include <iostream>

using namespace std;

int main(){
    int rows=3;
    int cols=3;
    int arr[rows][cols]={{1,2,3},{4,25,6},{7,8,9}};
    int sum=0;
    int max=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
        }
        sum=0;
        
    }
cout<<max;
    return 0;
}