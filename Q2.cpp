// Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
//the area of a circle.
#include<iostream>
using namespace std;
int main(){
    float r,Area;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    Area=3.14*(r*r);
    cout<<"The area of the fountain is: "<<Area<<endl;
    return 0;
}