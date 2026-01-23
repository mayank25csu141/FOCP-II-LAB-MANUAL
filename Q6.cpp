//An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
//Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
//display results.
#include<iostream>
using namespace std;
int main(){
    int n;
    float basicsalary,bonus,netsalary;
    cout<<"Enter the number of employees: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the basic salary of employee "<<i<<": "<<endl;
        cin>>basicsalary;
        bonus=0.12*basicsalary;
        netsalary=basicsalary+bonus;
        cout<<"Employee "<<i<<":"<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Net Salary: "<<netsalary<<endl;
            
    }
}