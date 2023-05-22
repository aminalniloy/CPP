#include <iostream>
using namespace std;

int main() {
	int choice, num1, num2, result;

	while (true) {
		cout << "Choose desired calculation:\n"
			<< "1. subtraction\n"
			<< "2. addition\n"
			<< "3. multiplication\n"
			<< "4. division\n"
			<< "5. remainder\n"
			<< "6. stop\n"
			<< "Choose a calculation: ";
		cin >> choice;

		if (choice == 6) {
			break;
		}

		cout << "Provide first number: ";
		cin >> num1;

		cout << "Provide second number: ";
		cin >> num2;

		if (cin.fail()) { // Check if the input is valid
			cout << "Invalid input. Please enter a number." << endl;
			cin.clear(); // Clear the error flag
			cin.ignore(10000, '\n'); // Ignore the rest of the input
			continue; // Ask the user for input again
		}

		if (choice == 1) {
			result = num1 - num2;
			cout << num1 << "-" << num2 << " = " << result << endl;
		}
		else if (choice == 2) {
			result = num1 + num2;
			cout << num1 << "+" << num2 << " = " << result << endl;
		}
		else if (choice == 3) {
			result = num1 * num2;
			cout << num1 << "*" << num2 << " = " << result << endl;
		}
		else if (choice == 4) {
			if (num2 == 0) { // Check if the second number is zero
				cout << "Invalid input. Division by zero." << endl;
				continue;
			}
			result = num1 / num2;
			cout << num1 << "/" << num2 << " = " << result << endl;
		}
		else if (choice == 5) {
			result = num1 % num2;
			cout << num1 << "%" << num2 << " = " << result << endl;
		}
		else {
			cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
		}
	}

	cout << "ByeBye!" << endl;

	return 0;
}
