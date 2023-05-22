#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3, average;
	cout << "Give three numbers: ";
	cin >> num1 >> num2 >> num3;

	average = (num1 + num2 + num3) / 3.0;

	cout << "The average of three numbers is: " << average << endl;

	return 0;
}
