#include <iostream>

using namespace std;

int main(){
    int rows=3;
    int cols=3;
    int arr[rows][cols]={{1,2,3},{4,25,6},{7,8,9}};
  
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           

           cout<<arr[j][i]<<" ";
        }
        cout<<endl;
      
        
    }

    return 0;
}