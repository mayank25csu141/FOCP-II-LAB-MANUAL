/*A typing practice app displays the alphabets in pyramid form. Implement a solution to display: 
A
AB
ABC 
ABCD 
ABCDE*/
#include <iostream>
using namespace std;

int main() {
    for (char i = 'A'; i <= 'E'; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
