/*. A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result*/
#include<iostream>
using namespace std;
int main(){
    float arr[10];
    float totalsalary=0,avgsalary;
    int i;
        cout<<"Enter total salary of the employees: "<<endl;
    for(i=0;i<10;i++){
        cout<<"Employee"<<i+1<<" :";
        cin>>arr[i];
        totalsalary+=arr[i];
    }
    avgsalary=totalsalary/10.0;
    cout<<"The total salary is: "<<totalsalary<<endl<<"The avg salary is : "<<avgsalary<<endl;
    return 0;
}