#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Give a number: ";
	cin >> number;

	if (number > 0) {
		cout << "The given number is a positive number" << endl;
	}
	else if (number < 0) {
		cout << "The given number is a negetive number" << endl;
	}
	else {
		cout << "The given number is a zero" << endl;
	}

	return 0;
}