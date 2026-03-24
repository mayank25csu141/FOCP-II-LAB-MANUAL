/*A data analytics tool flips rows and columns for better visualization. Implement a solution to
store a 3×3 matrix and compute its transpose.*/
#include<iostream>
using namespace std;
int main(){
    int m1[3][3], transpose[3][3];

    cout<<"Enter your matrix:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m1[i][j];
        }
    }
    // Transpose logic
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i] = m1[i][j];
        }
    }
    // Print transpose
    cout<<"The transpose of the matrix is:\n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<transpose[i][j]<<" ";
        }
          cout<<endl;
}
}