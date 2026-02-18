/*Implement a modular C++ solution that reads marks for 10 subjects into an array in main() 
and delegates the computation of average, minimum, and maximum scores to a separate method computePerformance() .*/
#include <iostream>
using namespace std;
// Function declaration
void computePerformance(int marks[], int size);
int main() {
   int Size = 10;
    int marks[Size];
    cout << "Enter marks for 10 subjects:\n";
    for (int i = 0; i < Size; i++) {
        cout << "Subject" << i + 1<<" : ";
        cin >> marks[i];
    }
    // Call function to compute performance
    computePerformance(marks, Size);
    return 0;
}
// Function definition
void computePerformance(int marks[], int size) {
    int sum = 0;
    int min = marks[0];
    int max = marks[0];
    for (int i = 0; i < size; i++) {
        sum += marks[i];
        if (marks[i] < min)
            min = marks[i];
        if (marks[i] > max)
            max = marks[i];
    }
    double avg = (double)sum / size;
    cout << "Average Marks: " << avg << endl;
    cout << "Minimum Marks: " << min << endl;
    cout << "Maximum Marks: " << max << endl;
}
