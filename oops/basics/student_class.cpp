#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int roll_no;
    static const int size = 5;
    int marks[size];

    Student(string name,int roll_no,const int marks_arr[size]){
        this->name = name;
        this->roll_no = roll_no;
        for(int i = 0; i < size; ++i){
            this->marks[i] = marks_arr[i];
        }
    }

    int calculateGrade() const {
        int sum = 0;
        for(int i = 0; i < size; ++i){
            sum += marks[i];
        }
        return sum / size;
    }

    void displayInfo() const {
        cout << "Wasil got " << calculateGrade()
             << " average marks" << endl;
    }
};
int main(){
    int grades[5] = {98, 99, 97, 95, 98};
    Student s1("wasil", 44, grades);
    s1.displayInfo();
    return 0;
}