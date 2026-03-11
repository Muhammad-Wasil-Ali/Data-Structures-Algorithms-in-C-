#include <iostream>
using namespace std;

class Book{
private:
    string title;
    bool isIssued;

public:

    // Constructor
    Book(string t){
        title = t;
        isIssued = false;
    }

    void issueBook(){
        if(isIssued){
            cout<<"Book already issued"<<endl;
        }else{
            isIssued = true;
            cout<<"Book issued successfully"<<endl;
        }
    }

    void returnBook(){
        if(!isIssued){
            cout<<"Book was not issued"<<endl;
        }else{
            isIssued = false;
            cout<<"Book returned successfully"<<endl;
        }
    }

    void displayInfo(){
        cout<<"Book Title: "<<title<<endl;

        if(isIssued)
            cout<<"Status: Issued"<<endl;
        else
            cout<<"Status: Available"<<endl;
    }
};

int main(){

    Book b1("C++ Programming");

    b1.displayInfo();

    b1.issueBook();
    b1.displayInfo();

    b1.returnBook();
    b1.displayInfo();

    return 0;
}