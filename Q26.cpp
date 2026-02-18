/*A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pass;
    cout<<"Enter the password: "<<endl;
    getline(cin, pass);
    int upperCase = 0;
    int lowerCase = 0;
    int digit = 0;
    int specialChar = 0;
    for( int i=0;i< pass.size();i++){
        char ch = pass.at(i);
        if(ch >= 'A' && ch <= 'Z') {
            upperCase++;
        }else if(ch >= 'a' && ch <= 'z') {
            lowerCase++;
        }else if(ch >= '0' && ch <= '9') {
            digit++;
        }else {
            specialChar++;
        }
    }
     if(upperCase == 0) {
        pass += "A";
     }
     if(lowerCase == 0) {
        pass += "a";
     }
     if(digit == 0) {
        pass += "67";
     }
     if(specialChar == 0) {
        pass += "@";
     }
     cout<<endl<<pass;
}