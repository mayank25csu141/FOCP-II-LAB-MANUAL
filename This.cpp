#include<iostream>
using namespace std;
class A{
    int a1;
    int a2;
    int a3;
    public:
    A(){
        a1=0;
        a2=0;
        a3=0;
    }
    A(int a1, int a2, int v3){
       this-> a1=a1;
       (*this).a2=a2;
       a3=v3;
    }
    void display(){
        cout<<"\n a1 = "<<a1 <<"\n a2 = "<<a2<<"\n v3 = "<<a3;
      }
    };
int main(){
A obj1,obj2(23,67,90);
A *obj3=new A(45,67,89);
A *obj4=new A();
cout<<"\n Print new ptr";
obj1.display();
obj2.display();
return 0;
}