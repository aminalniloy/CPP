#include <iostream>
using namespace std;

int main() {
	int number, sum = 0, count = 0;
	double average;

	while (true) {
		cout << "Give a number (give zero when you want to get sum): ";
		cin >> number;
		if (number <= 0) {
			break;
		}
		sum = sum + number;
	}
	cout << sum << endl;
	return 0;
}