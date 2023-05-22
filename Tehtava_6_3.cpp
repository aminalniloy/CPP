#include <iostream>
#include <string>
using namespace std;

void printWord(const string& word) {
    cout << "The word you entered is: " << word << endl;
}

int main() {
    string input;

    cout << "Enter a word: ";
    cin >> input;

    printWord(input);

    return 0;
}