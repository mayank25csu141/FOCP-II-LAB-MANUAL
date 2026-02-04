//Q20. A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=3;i++){ //rows
        for(j=1;j<=5;j++){  //columns
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}