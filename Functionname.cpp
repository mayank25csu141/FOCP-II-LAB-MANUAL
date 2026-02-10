#include<iostream>
using namespace std;
void welcome(string="Agent",string="");
int main(){
    welcome();
    welcome("Mayank");
    welcome("Mayank","Gaur");
    return 0;
}
//definition
void welcome(string fname,string lname){
    cout<<"\n Welcome "<<fname<<lname;
}