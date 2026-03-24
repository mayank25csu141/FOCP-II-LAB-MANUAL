/*A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two
3×3 matrices and compute their sum.*/
#include<iostream>
using namespace std;
int main(){
      int m1[3][3], m2[3][3], sum[3][3];
      cout<<"Enter the first 3*3 matrix: "<<endl;
      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    cin>>m1[i][j];
            }
      }
      cout<<"Enter the second 3*3 matrix: "<<endl;
      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    cin>>m2[i][j];
            }
      }
      // Compute the sum of the two matrices
      for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                    sum[i][j] = m1[i][j] + m2[i][j];
                    cout<<sum[i][j]<<" ";
            }
            cout<<endl;
      }
      // Display the sum matrix
    //   cout<<"The sum of the two matrices is: "<<endl;
    //   for(int i=0;i<3;i++){
    //         for(int j=0;j<3;j++){
    //                 cout<<sum[i][j]<<" ";
    //         }
    //         cout<<endl;
    //   }
}