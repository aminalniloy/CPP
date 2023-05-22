#include <iostream>
using namespace std;

int main() {
	int number, sum = 0, count = 0;
	double average;

	while (true) {
		cout << "Give a positive number, provide a negative number to terminate: ";
		cin >> number;
		if (number < 0) {
			break;
		}
		sum = number + sum;
		count++;
	}
	if (count > 0) {
		average = static_cast<double>(sum) / count;
		cout << "The average of the given number is " << average << "." << endl;
	}
	else {
		cout << "Positive numbers were not provided." << endl;
	}
	return 0;
}