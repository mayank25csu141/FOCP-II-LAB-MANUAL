#include<iostream>
using namespace std;
class shape{
    public:
    void area(){
        cout<<"\n No dimensions , No area";
    }
    void perimeter(){
        cout<<"\n No dimensions, No perimeter";
    }
    void dimension(){
        cout<<"\n Nothing to display ";
    }
    void display(){
        cout<<"\n ******** We are 2D shapes*********";
    }
};
class square: public shape{
    int side;
    public:
    square(){
        side=0;
    }
    square(int s){
        side=s;
    }
    void area(){//overloading
        cout<<"\n Area of square "<<side*side;
    }
    void perimeter(){//overriding
        cout<<"\n Perimeter of square "<<4*side; 
    }
    void dimension(){//overriding
        cout<<"\n Side of square is "<<side;
    }
};
int main(){
    shape s1;
    square s,ss(12);
    s1.area();s1.perimeter();s1.dimension();s1.display();
    ss.area();ss.perimeter();ss.dimension();
    ss.shape::area();
    ss.display();
    return 0;
}