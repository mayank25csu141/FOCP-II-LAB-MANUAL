#include<iostream>
using namespace std;
class Car{
    string brand;string color;
    public:
    void input(){
        cout<<"Enter the brand and color of the car: ";
        cin>>brand>>color;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Color: "<<color<<endl;
    }

};