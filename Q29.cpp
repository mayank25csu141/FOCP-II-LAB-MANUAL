/*. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
temperatures in an array and display the minimum temperature for the month*/
#include<iostream>
using namespace std;
int main(){
    int arr[30];
    cout<<"Enter the 30 days temp: "<<endl;
    int i,j,temp;
    for(i=0;i<30;i++){
      cout<<"Day "<<i+1<<": ";
      cin>>arr[i];
    }
    int minTemp=arr[0];
    for(i=1;i<30;i++){
        if(arr[i]<minTemp){
            minTemp=arr[i];
        }
    }
    cout<<"\n The Minimum Temperature is: "<<minTemp<<endl;
    return 0;
}