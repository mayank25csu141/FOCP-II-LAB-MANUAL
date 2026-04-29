#include<iostream>
using namespace std;
namespace Myspace{
    int x=10;
    void show(){
        cout<<"Hello";
    }
}
int main(){
    int x=100;
    cout<<"\n My Space: "<<Myspace::x<<endl;
    cout<<"Normal Variable X "<<endl;
return 0;
}