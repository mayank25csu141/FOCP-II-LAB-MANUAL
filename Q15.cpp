//. A data analytics tool finds the maximum sales figure from multiple entries. 
//Implement a solution to accept ‘n’ numbers and display the largest.
#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of sales entries: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of entries." << endl;
        return 1;
    }

    double maxSales = numeric_limits<double>::lowest();
    double salesEntry;

    for (int i = 0; i < n; ++i) {
        cout << "Enter sales figure " << (i + 1) << ": ";
        cin >> salesEntry;

        if (salesEntry > maxSales) {
            maxSales = salesEntry;
        }
    }

    cout << "The maximum sales figure is: " << maxSales << endl;
    return 0;
}