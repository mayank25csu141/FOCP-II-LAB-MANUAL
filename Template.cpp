#include<iostream>
using namespace std;
template<typename T1,typename T2>
T1 add(T1 v1,T2 v2){
    return (v1+v2);
}
int main(){
    cout<<add<int>(10,20)<<endl;
    cout<<add<double>(30.5,67.89)<<endl;
    cout<<add<string>("Hello","World");
    return 0;
}