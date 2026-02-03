//USING FLAG AND TWO POINTERS
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	int i,j;
    cout<<"Enter the string: "<<endl;
	getline(cin,str);
	 int flag=1;
	 for(i=0,j=str.length() - 1;i <= j;i++,j--){
			 	if(str[i]!=str[j]){
	 		flag=0;
	 		break;
		 }
		 
	 }
	 if(flag==1){
	 	cout<<"YES";
	 }
	 else{
	 	cout<<"NO";
	 }
}