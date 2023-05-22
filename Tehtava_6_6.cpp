#include <iostream>
using namespace std;

void printFence(int num1, int num2) {
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    int inputNum1, inputNum2;

    cout << "Enter the first number: ";
    cin >> inputNum1;

    cout << "Enter the second number: ";
    cin >> inputNum2;

    printFence(inputNum1, inputNum2);

    return 0;
}