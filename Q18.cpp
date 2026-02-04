//. A String-matching tool validates if IDs are palindromes. Implement
//a solution to check whether a given ID is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string id;
    int i,j;
 cout<<"Enter the id: "<<endl;
 cin>>id;
for(i=0,j=id.length()-1;i<=j;i++,j--){
    if(id[i]!=id[j]){
        cout<<"The given id is not a palindrome"<<endl;
         break;
    }
    else if(i==j || i+1==j){
        cout<<"The given id is a palindrome"<<endl;
    }

}
return 0;
}