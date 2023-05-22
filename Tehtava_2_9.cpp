#include <iostream>
using namespace std;

int main() {
	int number1, number2, number3, sum, result;

	cout << "Provide the first number: ";
	cin >> number1;

	cout << "Provide the second number: ";
	cin >> number2;

	sum = number1 + number2;
	cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;

	cout << "Provide the third number: ";
	cin >> number3;

	result = sum - number3;
	cout << "The result after subtracting " << number3 << " is " << result << endl;

	return 0;
}