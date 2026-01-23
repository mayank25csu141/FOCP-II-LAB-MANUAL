//A student wants to swap the values of two variables for practising coding basics.
//Implement a solution to swap two numbers using different techniques.
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before swapping a="<<a<<" b="<<b<<endl;
    //swapping using a temporary variable
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping using temporary variable a="<<a<<" b="<<b<<endl;
    //swapping without using a temporary variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping without using temporary variable a="<<a<<" b="<<b<<endl;
    return 0;
    //swapping using XOR bitwise operator 
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping using XOR operator a="<<a<<" b="<<b<<endl;
    
}