#include <iostream>
#include <string>
using namespace std;

double performCalculation(double num1, double num2, char operation) {
    double result;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        cout << "Invalid operator!" << endl;
        return 0;
    }

    return result;
}

int main() {
    double inputNum1, inputNum2;
    char inputOperator;

    cout << "Enter the first number: ";
    cin >> inputNum1;

    cout << "Enter the second number: ";
    cin >> inputNum2;

    cout << "Enter the operator (+, -, *): ";
    cin >> inputOperator;

    double result = performCalculation(inputNum1, inputNum2, inputOperator);

    cout << "The result is: " << result << endl;

    return 0;
}