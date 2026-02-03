//check whether a number is prime or not within the given range.
#include <iostream>
using namespace std;

int main() {
    int r1, r2;

    cout << "Enter range 1: ";
    cin >> r1;
    cout << "Enter range 2: ";
    cin >> r2;

    for (int i = r1; i <= r2; i++) {
        if (i < 2) continue;   // 0 and 1 are not prime

        int isprime = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
            cout << i << " is a Prime number" << endl;
        else
            cout << i << " is NOT a Prime number" << endl;
    }

    return 0;
}
