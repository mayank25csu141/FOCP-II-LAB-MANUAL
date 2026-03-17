#include<iostream>
using namespace std;
class Student{
    string name;
    int RollNo;
    int marks1;
    int marks2;
    int marks3;
    public:
    void inputDetails(){
        cout<<"Enter name, RollNo, marks1, marks2, marks3: "<<endl;
        cin>>name>>RollNo>>marks1>>marks2>>marks3;
    }
    int calculateTotal(){ // getter
        return marks1+marks2+marks3;
}
    void displayDetails(){//getter
        cout<<"Name: "<<name<<"RollNO: "<<RollNo<<endl;
        cout<<"Marks1: "<<marks1<<"Marks2: "<<marks2<<"Marks3: "<<marks3<<endl;
        cout<<"Total: "<<endl<<calculateTotal();
    }
};
int main(){
    Student s1; // s1  is the object/intance of the class student 
    Student s2;
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();
    return 0;
}