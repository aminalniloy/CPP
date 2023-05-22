#include <iostream>
#include <string>
using namespace std;

void printWordMultipleTimes(const string& word, int numTimes) {
    for (int i = 0; i < numTimes; ++i) {
        cout << word << endl;
    }
}

int main() {
    string inputWord;
    int inputNumTimes;

    cout << "Enter a word: ";
    cin >> inputWord;

    cout << "Enter the number of times to print the word: ";
    cin >> inputNumTimes;

    printWordMultipleTimes(inputWord, inputNumTimes);

    return 0;
}
