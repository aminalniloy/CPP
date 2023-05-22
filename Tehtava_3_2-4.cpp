#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Give an integer: ";
	cin >> number;

	if (number < 10) {
		cout << "The given number is less than 10" << endl;
	}
	else if (number > 10) {
		cout << "The given number is more than 10" << endl;
	}
	else if (number < 0) {
		cout << "Give a positive number, please" << endl;
	}
	else {
		cout << "The given number is 10!" << endl;
	}

	return 0;
}