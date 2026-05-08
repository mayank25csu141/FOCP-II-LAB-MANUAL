#include<iostream>
using namespace std;
class Rectangle{
    int len;
    int wid;
    public:
    Rectangle(){
        len=0;
        wid=0;
    }
    Rectangle(int len,int wid){
        this->len=len;
        this->wid=wid;
    }
    int getlen(){
        return this->len;
    }
    int getwid(){
        return this->wid;
    }
   friend Rectangle operator+(Rectangle obj1,Rectangle obj2);
};
   Rectangle operator+(Rectangle obj1, Rectangle obj2){
    Rectangle temp;
    temp.len= obj1.getlen()+obj2.getlen();
    temp.wid=obj1.getwid()+obj2.getwid();
    return temp;
    }

int main(){
    Rectangle r1(10,20),r2(21,32);
    Rectangle r3=operator+(r1,r2);
    cout<<r3.getlen()<<" "<<r3.getwid()<<endl;
    return 0;

}