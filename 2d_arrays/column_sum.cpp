#include <iostream>

using namespace std;

int main(){
int rows=3,cols=3;
    int arr[rows][cols]={
        {1,2,3}, {4,5,6}, {7,8,9}
    };

    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
sum+=arr[j][i];
        }

        cout<<"Sum of "<<i<<" column is "<<sum<<endl;
    }
    return 0;
}