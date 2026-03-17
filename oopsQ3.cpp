#include<iostream>
using namespace std;
class BankAccount{
    string accountHolderName;
    int accountNumber;
    double balance;
    public:
    void inputDetails();
    void displayDetails();
    void deposit(double amount);
    void withdraw(double amount);
};
void BankAccount::inputDetails(){
    cout<<"Enter the accountnumber ,account holder name, balance: "<<endl;
    cin>>accountNumber>>accountHolderName>>balance;
}
void BankAccount::deposit(double amount){
balance+=amount;
cout<<"Amount Deposited Balance= "<<balance;
}
void BankAccount::withdraw(double amount){
    if(amount>balance){
        cout<<"Insufficient Balance: ";
    }
    else{
        balance-=amount;
    }
    cout<<"\n After withdrawn: "<<balance<<endl;
}
void BankAccount::displayDetails(){
    cout<<"After withdrawl"<<balance<<endl;
}
int main(){
   BankAccount b1;
   b1.inputDetails();
   b1.displayDetails();
   b1.deposit(10000);
   b1.withdraw(5000);
   return 0;
}