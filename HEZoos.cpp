#include <iostream>
#include<string>
using namespace std;
int main() {
	int x=0;
	int y=0;
    string s;
    getline(cin,s);
	int n= s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='z'){
			x++;
		}else{
			y++;
		}
	}
if((2*x)==y){
	cout<<"Yes";
}else{
	cout<<"No";
}
	return 0;
	}