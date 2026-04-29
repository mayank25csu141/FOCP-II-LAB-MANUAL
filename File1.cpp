#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //by default ios::out
    ofstream FileName("Mayank.txt");
    FileName<<"My Name is Mayank Gaur. \n Currently i am learning File handling ";
    FileName<<"fjdskfdkf dfjdkfjkd fjfk fjdkf djf ";
    FileName.close();
    cout<<"Data Written Successfully";
    return 0;
}