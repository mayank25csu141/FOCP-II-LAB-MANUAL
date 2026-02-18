/*. The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/
#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3,s4,s5;
    float totalmarks,percentage,marksobt;
    cout<<"Enter total marks: "<<endl;
    cin>>totalmarks;
    cout<<"Enter  the marks in each subject: "<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;
    marksobt=(s1+s2+s3+s4+s5);
    percentage =(marksobt/totalmarks)*100;
    cout<<"The total marks of student is: "<<marksobt<<endl;
    cout<<"The Percentage of student is: "<<percentage<<endl;
}