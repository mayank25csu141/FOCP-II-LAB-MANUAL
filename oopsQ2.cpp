#include<iostream>
using namespace std;
class Rectangle{
    float length;
    float width;
    public:
    void inputDimensions(){
        cout<<"Enter length, width: "<<endl;
        cin>>length>>width;
    }
    float calculateArea(){
        return (length*width);
    }
    float calculateParameter(){
        return 2*(length+width);
    }
    void displayResult (){
        cout<<"Length: "<<length<<" Width: "<<width<<endl;
        cout<<"Area of rectangle: "<<calculateArea()<<endl;
        cout<<"Parameter of rectangle: "<<calculateParameter()<<endl;
    }

};
int main(){
    Rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}