/*Create a class Person with data members name and age, and a function 
displayPerson(). Derive a class Student that adds roll number and a function 
displayStudent(). Show how a Student object can access both base and derived class 
functions. (PersonStudent)*/
#include<iostream>
using namespace std;
class Person{
    string name; int age;
    public:
    Person(){
        cout<<"\n Person default constructor ";
        name="default";age=18;
    }
    Person(string nm, int ag){
        cout<<"\n Person parametarized constructor ";
        name=nm;
        age=ag;
    }
    //private: Keep it private
    void display(){
     cout<<"\n name= "<<name<<"\n age = "<<age;
    }
};
class Student : public Person{
 string rollno;
 public:
 Student(){
    cout<<"\n Student default constructor ";rollno="25CSU141";
 }
 Student(string nm, int ag, string rno): Person(nm,ag){//initiallization list
    cout<<"\n Student Parametarized ";
    rollno=rno;
}
 void display_student(){
    display();
    cout<<"\n Rollno = "<<rollno;
 }
};
int main(){
  Student p1,p2("abcd",23,"25CSU141");
  p1.display();
  p1.display_student();
  p2.display_student();
  return 0;
}