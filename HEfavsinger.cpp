//Bob has a playlist of N
// songs, each song has a singer associated with it (denoted by an integer)
//Favourite singer of Bob is the one whose songs are the most on the playlist\
//Count the number of Favourite Singers of Bob
#include <iostream>
using namespace std;
int main() {
	int n;
	int sizee;
	cin>>sizee; 
	int arr[1001] = {0};

	for(int i = 0;i < sizee;i++) {
		cin>>n;
		arr[n]++;
	}
	int max = 0;
	for(int i = 0;i < 1000;i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	int ans = 0;
	for(int i = 0;i < 1000;i++) {
		if(max == arr[i]) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

