#include<iostream>
using namespace std;
void SwapPointer(int *p1, int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<*p1<<*p2<<endl;
}
int main(){
    int a,b;
    a=30;b=55;
    cout<<a<<b<<endl;
    SwapPointer(&a,&b);
    cout<<a<<b;
}
   
