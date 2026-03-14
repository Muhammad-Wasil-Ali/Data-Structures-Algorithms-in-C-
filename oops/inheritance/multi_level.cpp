#include <iostream>

using namespace std;

class GrandParent{
    public:
    void grandParentInfo(string name){
        cout<<name<<" is a grand parent"<<endl;
    }
};

class Parent :public GrandParent {

    public:
    void parent(string name){
        cout<<name<< " is a parent"<<endl;
    }
};

class Child:public Parent{
    public:
    void child(string name){
       cout<<name<< " is a child"<<endl;
    }
};
int main(){

    Child c1;
    c1.grandParentInfo("wajid ali");
    c1.parent("ehsan ali");
    c1.child("wasil ali");
    return 0;
}