#include<iostream>
using namespace std;
/*int sum(int ,int );
float sum(float,float);
double sum(double,double); For backward referencing */
int sum(int n1, int n2){
    cout<<"\n Int method";
    return n1+n2;
}
 float sum(float n1,float n2){
    cout<<"\n Float method";
    return n1+n2;
}
double sum(double n1 ,double n2){
    cout<<"\n Double method ";
    return n1+n2;
}
int main(){
    cout<<sum(10,5)<<endl;
    cout<<sum(5.28f,10.28f)<<endl;
    cout<<sum(5.2869,10.2850)<<endl;
return 0;
}
