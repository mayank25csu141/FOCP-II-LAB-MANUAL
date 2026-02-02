//. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
//The program should continue executing based on the user's choice and display the result of each operation
#include<iostream>
using namespace std;
int main(){
    char choice;
    do{
        double num1, num2;
        char op;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter an operator (+, -, *, /): ";
        cin>>op;
        cout<<"Enter second number: ";
        cin>>num2;

        double result;
        switch(op){
            case '+':
                result = num1 + num2;
                cout<<"Result: "<<result<<endl;
                break;
            case '-':
                result = num1 - num2;
                cout<<"Result: "<<result<<endl;
                break;
            case '*':
                result = num1 * num2;
                cout<<"Result: "<<result<<endl;
                break;
            case '/':
                if(num2 != 0){
                    result = num1 / num2;
                    cout<<"Result: "<<result<<endl;
                } else {
                    cout<<"Error: Division by zero is not allowed."<<endl;
                }
                break;
            default:
                cout<<"Invalid operator!"<<endl;
        }

        cout<<"Do you want to perform another operation? (y/n): ";
        cin>>choice;

    } while(choice == 'y' || choice == 'Y');

    cout<<"Calculator program ended."<<endl;
    return 0;
}