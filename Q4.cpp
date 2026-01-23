//A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
//Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
#include<iostream>
using namespace std;
int main(){
    int itemNo,quantity;
    float unitPrice,amount,discountedAmount;
    cout<<"Enter the item number: ";
    cin>>itemNo;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    cout<<"Enter the unit price: ";
    cin>>unitPrice;
    amount=quantity*unitPrice;
    discountedAmount=amount-(0.20*amount);
    cout<<"The total bill amount after 20% discount is: "<<discountedAmount<<endl;
    return 0;

}