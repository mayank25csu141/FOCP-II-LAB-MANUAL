#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	int n= s.length();
	for(int i=0;i<n;i++){
		if(s[i]>=65 && s[i]<=96){
			s[i]= s[i] + 32; 
		}
		else if(s[i]>=97 && s[i]<=129){
			s[i]= s[i] - 32;
		}
	}
cout<<s;
return 0;
}