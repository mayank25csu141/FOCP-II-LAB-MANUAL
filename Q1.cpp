//A teacher wants to calculate the average marks of three students to determine the class performance. 
//Implement a solution to accept three numbers and compute their average.
#include<iostream>
using namespace std;
int main(){
float M1,M2,M3,Avg;
cout<<"Enter the marks of three students: "<<endl;
cin>>M1>>M2>>M3;
Avg=(M1+M2+M3)/3;
cout<<"The average marks of the three students is: "<<Avg<<endl;
return 0;
}