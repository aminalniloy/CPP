#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, smallest;
	cout << "Give three numbers: ";
	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3) {
		cout << "Given numbers are same" << endl;
		return 0;
	}

	smallest = num1;

	if (num2 < smallest) {
		smallest = num2;
	}

	if (num3 < smallest) {
		smallest = num3;
	}

	cout << "The smallest number is: " << smallest << endl;

	return 0;
}
