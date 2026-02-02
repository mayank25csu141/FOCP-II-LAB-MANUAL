//A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
//expenses and apply a discount accordingly.
#include<iostream>
using namespace std;
int main(){
    int items;
    float discount;
    float totalamount;
    float amount;
    cout<<"Enter total no of items";
    cin>>items;
    cout<<"Enter Total amount";
    cin>>amount;
        if(items>1000){
            discount=amount*0.10;
            totalamount=amount-discount;
            cout<<"The total amount is:"<<totalamount<<endl;
        }
        else{
            cout<<"No discount available. Total amount is:"<<endl;
            cout<<"Total amount:"<<amount<<endl;
        }
        return 0;
    }

