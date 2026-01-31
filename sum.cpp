// QUES Create a program that takes multiple numbers as input and calculates their sum while using Continue to skip negative num bers and break to stop input if the user enters a specific value.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int number;
    cout<<"Enter numbers to sum";
    while(true){
        cin>>number;
        if(number<0){
            continue;
        }
        if(number==0){
            break;
        }
        sum=sum+number;
    }
    cout<<"The sum is:"<<sum<<endl;
    return 0;
}
