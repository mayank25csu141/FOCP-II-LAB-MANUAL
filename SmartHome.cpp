/*Smart Home Light System
Create a class SmartLight with:
Data Members:
. brand
· brightness (0-100)
· isOn (true/false)
Constructors:
· Default constructor (light off, brightness 50)
· Parameterised constructor (initialise all values
Methods:
· turnOn()
· turnOff()
· increaseBrightness()
· decreaseBrightness()
displayStatus()
. Destructor to print msg "Object destroyed"
Create 2 objects and test all functions.*/
#include<iostream>
#include<string>
using namespace std;
class SmartHome{
   public:
   string brand;
   int brightness;
   bool ison;
   SmartHome();
   SmartHome(string brand , int brightness);
    void turnon();
    void turnoff();
    void increaseBrightness();
    void decreaseBrightness();
    void displayStatus();
    ~SmartHome();
};
SmartHome :: SmartHome(){
    brand = "Not Assigned";
    brightness = 50;
    ison = false;

}
SmartHome :: SmartHome(string brand, int brightness){
    this->brand = brand;
    this->brightness = brightness;
    this->ison = false;

}
 void SmartHome :: turnon(){
        if(!ison){
            ison = true;
            cout<<"Light turned on successfully"<<endl;
        }
        else{
            cout<<"Light is already on"<<endl;
        }

 }
 void SmartHome :: turnoff(){
        if(ison){
            ison = false;
            cout<<"Light turned off successfully"<<endl;
        }
        else{
            cout<<"Light is already off"<<endl;
        }

 }
 void SmartHome :: increaseBrightness(){
        if(brightness < 100){
            brightness += 10;
            cout<<"Brightness increased to "<<brightness<<endl;
        }
        else{
            cout<<"Brightness is already at maximum"<<endl;
        }

 }
 void SmartHome :: decreaseBrightness(){
        if(brightness > 0){
            brightness -= 10;
            cout<<"Brightness decreased to "<<brightness<<endl;
        }
        else{
            cout<<"Brightness is already at minimum"<<endl;
        }
    }
     void SmartHome :: displayStatus(){
        cout<<"\n----- Light Status -----\n";
        cout<<"Brand: "<<brand<<endl;
        cout<<"Brightness: "<<brightness<<endl;
        cout<<"Light is "<<(ison ? "On" : "Off")<<endl;
     }
     SmartHome ::~SmartHome(){
        cout<<"Object destroyed"<<endl;
    }      
int main(){
    SmartHome light1;
    SmartHome light2("Philips", 70);
    light1.displayStatus();
    light2.displayStatus();
    light1.turnon();
    light1.increaseBrightness();
    light1.decreaseBrightness();
    light1.turnoff();
}