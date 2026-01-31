#include <iostream>
using namespace std;
int main() {
int l;
int r;
int k;
int i;
cin>>l>>r>>k;
 int count=0;
for( i=l;i<=r;i++){
if(i%k==0){
	count++;
}
}
cout<<count<<endl;
return 0;
}