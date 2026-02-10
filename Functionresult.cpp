#include<iostream>
using namespace std;
/*int result(int,int);
int result(int ,int ,int);
  int result(int ,int ,int ,int);*/
  int result(int,int, int=0 ,int=0 ,int=0);
int main(){
cout<<result(45,58)<<endl;
cout<<result(57,68,95)<<endl;
cout<<result(78,49,65,77)<<endl;
cout<<result(44,69,84,56,75)<<endl;
}
/*int result(int n1,int n2){
    cout<<"\n The result of two subject is :";
    return n1+n2;
}
int result(int n1,int n2,int n3){
    cout<<"\n The result of three subject is :";
    return n1+n2+n3;
}
int result(int n1,int n2,int n3,int n4){
    cout<<"\n The result of four subject is :";
    return n1+n2+n3+n4;*/
int result(int n1,int n2,int n3,int n4,int n5){
    cout<<"The result of the given subjects are :";
    return (n1+n2+n3+n4+n5);
}