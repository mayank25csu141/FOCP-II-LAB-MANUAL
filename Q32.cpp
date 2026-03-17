/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.*/
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int secLargest = INT_MIN;
    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }
    cout << "Largest number: " << largest << endl;
    cout << "Second Largest number: " << secLargest << endl;
    return 0;
}