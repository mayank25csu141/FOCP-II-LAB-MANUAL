#include <iostream>
using namespace std;
int main() {
	int num;
	long long fact=1;
	cin>>num;
	for(int i=num;i>=1;i--){
	fact=fact*i;
	}
	cout<<fact<<endl;
	return 0;
}