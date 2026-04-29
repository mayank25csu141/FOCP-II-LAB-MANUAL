/*A registration system rejects usernames that contain spaces or special characters. Write a C++ 
program to validate whether a given string can be accepted as a username.
*/
#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter a String: ";
    getline(cin, s1);
    bool valid = true;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i]==' ' || s1[i]=='@' || s1[i]=='#' || 
           s1[i]=='$' || s1[i]=='%' || s1[i]=='&' || s1[i]=='!'){
            valid = false;
            break;
        }
    }
    if(valid){
        cout<<"The Username is valid";
    } else {
        cout<<"Username not accepted";
    }
    return 0;
}