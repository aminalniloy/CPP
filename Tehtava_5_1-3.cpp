#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string words[SIZE];

    // Task 1: Ask the user for five words and add them to the array
    cout << "Enter five words:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Word " << i + 1 << ": ";
        cin >> words[i];
    }

    // Task 2: Change the first word to "Tuesday" and print the whole array
    words[0] = "Tuesday";
    cout << "\nModified array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Word " << i + 1 << ": " << words[i] << endl;
    }

    // Task 3: Ask the user for a number and change the corresponding word to "Varia"
    int number;
    cout << "\nEnter a number between 1 and 5: ";
    cin >> number;

    if (number >= 1 && number <= SIZE) {
        words[number - 1] = "Varia";
    }
    else {
        cout << "Invalid number!\n";
        return 0;
    }

    // Print the entire array
    cout << "\nModified array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Word " << i + 1 << ": " << words[i] << endl;
    }

    return 0;
}
