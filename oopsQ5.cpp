#include<iostream>
using namespace std;
class Temperature{
    float celsius,fahrenheit;
    public:
    Temperature();//default constructor
    Temperature(float celsius);
    void displayResult();
};
Temperature::Temperature(){
   fahrenheit=(9.0/5)*celsius+32;
}
Temperature::Temperature(float celsius){
    fahrenheit=(9.0/5)*celsius+32;
}
void Temperature::displayResult(){
    cout<<"Temperature in Fahenheit:"<<fahrenheit<<endl;
}
int main(){
    Temperature t1,t2(37.5);
    t1.displayResult();
    t2.displayResult();
    return 0;
}