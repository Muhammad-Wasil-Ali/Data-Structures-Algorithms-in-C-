#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={4,2,1,4,3,2,1};
int ans=0;
    for (int val:arr){
ans^=val;
    }

    cout<<ans;
    return 0;
}
