#include<iostream>
using namespace std;
 void SwapReference(int &r1 ,int &r2){
    int temp=r1;
    r1=r2;
    r2=temp;
    cout<< r1 <<r2<<endl;
 }
int main(){
    int a,b;
    a=30;b=55;
    cout<<a <<b <<endl;
    SwapReference(a,b);
    cout<<a<<b<<endl;
}
