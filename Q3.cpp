//. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
//convert Fahrenheit temperature into Centigrade or vice versa.
#include<iostream>
using namespace std;
int main(){
float C,c,F,f;
char choice;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice){
    case 'C':
    case 'c':
    cout<<"Enter the value in celsius"<<endl;
    cin>>c;
    f=(c*9.0/5.0)+32;
    cout<<"The value in fahrenheit is : "<<f<<endl;
    break;
    case 'F':
    case 'f':
    cout<<"Enter the value in fahrenheit"<<endl;
    cin>>f;
    f=(c*9.0/5.0)+32;
    cout<<"The value in celsius is : "<<c<<endl;
    break;
    default:
    cout<<"Invalid choice"<<endl;
    break;
}
return 0;
}