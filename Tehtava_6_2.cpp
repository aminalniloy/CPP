#include <iostream>
using namespace std;

void subtractDigits(int number) {
    cout << number << endl;
    while (number != 0) {
        int digitSum = 0;
        int tempNumber = number;

        while (tempNumber != 0) {
            digitSum += tempNumber % 10;  
            tempNumber /= 10;            
        }

        number -= digitSum;
        cout << number << endl;
    }
}

int main() {
    int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    subtractDigits(input);

    return 0;
}
