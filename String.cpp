#include<iostream>
using namespace std;
int main(){
    int a;
    float f;
    std::string name;
    std::cout<<"ENTER THE  INT FLOAT NAME :"<<std::endl;
    //std::cin>>a>>b>>name;
   // std::cout<<"Value of int :"<<a<<std::endl<<"The value of float :"<<b<<std::endl<<"The name is :"<<name;
   cin>>a;
   cin>>f;
   cin.ignore();
   //Used to ignore blank spaces after giving values in scanf,cin>>
   //cin>>name;
   getline(cin,name);
   cout<<"\n a="<<a<<"\n f="<<f<<"\n name= "<<name;
    return 0;
}