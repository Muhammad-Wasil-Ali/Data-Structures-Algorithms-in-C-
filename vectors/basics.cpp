#include <iostream>

using namespace std;

#include <vector>

int main(){

    vector<int> arr={1,2,3,4};

arr.push_back(11);
arr.push_back(12);
arr.push_back(118);
arr.push_back(12);
arr.push_back(119);arr.push_back(12);
arr.push_back(220);

cout<<"size :"<<arr.size()<<endl;

cout<<"capacity :"<<arr.capacity()<<endl;


    for(int val:arr){
        cout<<val<<endl;
    }
    return 0;
}