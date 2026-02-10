#include<iostream>
#include<string>
using namespace std;
void welcome()
{
    cout<<"\n Welcome Agent";
}
void welcome(string name){
    cout<<"\n Welcome "<<name;
}
int main()
{
    welcome();
    welcome("Section C");
    return 0;
}

