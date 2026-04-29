/*
A content-management system receives user-entered text that may contain inconsistent spacing, mixed 
letter cases, and invalid characters.
For reliable storage and processing, the system must normalize and validate the input string.
Develop a C++ program that performs the following tasks on a given input string:
1. Remove leading, trailing, and extra spaces between words
2. Convert the string to sentence case (first character uppercase, remaining lowercase)
3. Count and display:
o Total number of words
o Total number of digits
o Total number of special characters
4. Validate that the final string contains only alphabets, digits, and spaces
Display appropriate messages based on the validation result.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    // 1. Remove leading, trailing, and extra spaces
    string cleaned = "";
    int i = 0, n = input.length();
    // Skip leading spaces
    while (i < n && input[i] == ' ') i++;
    while (i < n) {
        // Add characters
        if (input[i] != ' ') {
            cleaned += input[i];
        } else {
            // Add only single space
            cleaned += ' ';
            while (i < n && input[i] == ' ') i++;
            continue;
        }
        i++;
    }
    // Remove trailing space if any
    if (!cleaned.empty() && cleaned.back() == ' ')
        cleaned.pop_back();
    // 2. Convert to sentence case
    if (!cleaned.empty()) {
        cleaned[0] = toupper(cleaned[0]);
        for (int i = 1; i < cleaned.length(); i++) {
            cleaned[i] = tolower(cleaned[i]);
        }
    }
    // 3. Count words, digits, special characters
    int words = 0, digits = 0, special = 0;
    // Count words
    stringstream ss(cleaned);
    string word;
    while (ss >> word) {
        words++;
    }
    // Count digits and special characters
    for (char ch : cleaned) {
        if (isdigit(ch)) {
            digits++;
        } 
        else if (!isalpha(ch) && ch != ' ') {
            special++;
        }
    }
    // 4. Validation
    bool valid = true;
    for (char ch : cleaned) {
        if (!isalpha(ch) && !isdigit(ch) && ch != ' ') {
            valid = false;
            break;
        }
    }
    // Output
    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;
    if (valid)
        cout << "Validation: String is VALID ✅" << endl;
    else
        cout << "Validation: String is INVALID ❌" << endl;
    return 0;
}