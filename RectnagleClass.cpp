#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int width;
    static int count;
    public:
Rectangle(){
    length=0;
    width=0;
}
Rectangle(int length , int width){
    this->length=length;
    this->width=width;
    count+=1;
}
void display(){
    cout<<"Length is : "<<length<<endl;
    cout<<"Width is : "<<width<<endl;
    cout<<"Total Object Created : "<<count<<endl;
}
friend void Area(Rectangle r);
friend void Dimension(Rectangle r);
};
int Rectangle :: count=0;
void Area(Rectangle r){
    cout<<"Area is :"<<r.length*r.width<<endl;
}
void Dimension(Rectangle r){
    cout<<"Length is : "<<r.length<<endl;
    cout<<"Width is : "<<r.width<<endl;
}
int main(){
    Rectangle r1, r2(45,34);
    r1.display();
    Area(r1);
    r2.display();
    Area(r2);
    return 0;
}
