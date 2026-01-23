//A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
//solution to classify the symbol.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        //Character is an alphabet
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<ch<<" is a Vowel."<<endl;
        }
        else{
            cout<<ch<<" is a Consonant."<<endl;
        }
    }
    else if(ch>='0' && ch<='9'){
        cout<<ch<<" is a Number."<<endl;
    }
    else{
        cout<<ch<<" is a Special Character."<<endl;
    }
    return 0;
}
    