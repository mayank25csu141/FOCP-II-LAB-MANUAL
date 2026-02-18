#include<iostream>
using namespace std;
void print(){
    static int count=0;
    count++;
    cout<<"Function called "<<count<<" times"<<endl;
} 
int main(){
    print();
    print();
    print();
}
