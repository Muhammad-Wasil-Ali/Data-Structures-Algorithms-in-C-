#include <iostream>

using namespace std;
class User{
    public:
    string name="raheel";
    string email="raheel@gmail.com";
    User(){
        cout<<"Default contructor run"<<endl;
    }
    User(string name,string email){
        this->name=name;
        this->email=email;
    }
void gender(){
    cout<<name<<" is a user "<<endl;
}

};

class Male:public User{
    public:

    Male(string name,string email):User(name,email){
        cout<<"In male constructor caling user constructor"<<endl;
    }
void gender(){
    cout<<name<<" is a male"<<endl;
}

};

class Female:public User{
    public:

    Female(string name,string email):User(name,email){
        cout<<"Calling user wih the female"<<endl;
    }
    void gender(){
        cout<<name<<" is a female"<<endl;
    }
};

int main(){

    
    Female f1("raheel","raheel@gmail.com");

    
    f1.gender();
    return 0;
}