//A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
//check the triangle type based on its sides.
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b &&b==c){
        cout<<"The triangle is equilateral"<<endl;
    }
    else if(a==b ||a==c ||b==c){
        cout<<"The triangle is isosceles"<<endl;
    }
    else{
        cout<<"The triangle is scalene"<<endl;
    }
    return 0;
}