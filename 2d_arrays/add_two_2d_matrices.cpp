#include <iostream>

using namespace std;

int main(){
int rows=3,cols=3;
    int arr1[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[rows][cols]={{10,11,12},{13,14,15},{16,17,18}};
    int addRows=rows;
    int addCols=cols+cols;

    int addArr[addRows][addCols];

    for(int  i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            addArr[i][j]=arr1[i][j];
        }
    }

    for(int  i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            addArr[i][cols+j]=arr2[i][j];
        }
    }


    for(int  i=0;i<addRows;i++){
        for (int j=0;j<addCols;j++){
           cout<<addArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}