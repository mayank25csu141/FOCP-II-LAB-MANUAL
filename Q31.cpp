/*. A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5.*/
#include<iostream>
using namespace std;
int main(){
     int arr[5];
     cout<<"Give five no in the array: "<<endl;
     int i;
      int count=0;
       for(i=0;i<5;i++){
        cout<<"The no "<<i+1<<" :";
        cin>>arr[i];
             if(arr[i]%3==0 && arr[i]%5==0){
            cout<<"The no is divisible by 3 and 5   "<<endl;
            count++;
        }
        else{
            cout<<"The no is not divisible by 3 and 5 "<<endl;
        }
   
       }
              cout<<"The total no divisible by both 3 and 5 are: "<<count<<endl;
       return 0;
}