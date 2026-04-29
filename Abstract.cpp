#include<iostream>
using namespace std;
class Shape{
    public:
    Shape(){
        cout<<"\n Shape Default Const called";
    } //virtual void area(){
       virtual void area()=0;// pure virtual function
    virtual void display () final{
        cout<<"\n We are 2d Shapes";
    }
};
class Rectangle: public Shape{
public:
int length ;
int width;
Rectangle(int l=5 , int w=10): length(l),width(w){
    cout<<"\n Rectangle Object Created ";
}
void area(){
    cout<<"\n Area="<<length*width;
}
void display_dim()const {
    length++;
}
void display(){
    cout<<"\n I am rectangle display";
}
};
int main(){
    Rectangle r2(50,45);
    r2.display();
    r2.display_dim();
    return 0;
}
