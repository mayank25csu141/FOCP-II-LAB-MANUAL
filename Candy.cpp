/*Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a class Candy with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy()*/
#include<iostream>
using namespace std;
class Candy{
    string color;
    int points;
    public:
    Candy();//default constructor
    Candy(string c);//parametarized
    Candy(string c,int p);//parametarized
    void setCandy(string,int);
    void displayCandy();
    void loose_Candy();
    void loose_Candy(int);
    void gain_Candy();
    void gain_Candy(int);
};
void Candy::loose_Candy(){
    points-=2;
    if(points<0){
        points=0;
    }
}
void Candy::loose_Candy(int pointsReduce){
    points-=pointsReduce;
    if(points<0){
        points=0;
    }
}
void Candy::gain_Candy(){
    points+=2;
}
void Candy::gain_Candy(int gainPoints){
    points+=gainPoints;
}
Candy::Candy(){
color="Black";
points=0;
}
Candy::Candy(string c){
    color=c;
    points=0;
}
Candy::Candy(string c,int p){
    color=c;
    points=p;
}
/*void Candy::setCandy(string c,int p){
    color=c;
    points=p;
}*/
void Candy::displayCandy(){
    cout<<"\n Color: "<<color;
    cout<<"\n Points: "<<points;
}
int main(){
Candy c1,c2("Yellow",39);
//c1.setCandy("Yellow",69);
//c2.setCandy("Violet",45);
Candy c3;
c3.gain_Candy();
c3.loose_Candy();
c1.displayCandy();
c2.displayCandy();
return 0;
}