#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10);
     for(int i =0;i<10;i++){
        v[i]=i;
     }
     for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
     }

    return 0;
}