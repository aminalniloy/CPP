#include <iostream>
using namespace std;

int main() {
	int x, y, sum, difference, product;
	float quotient;

	cout << "Enter the first integer: ";
	cin >> x;
	cout << "Enter the second integer: ";
	cin >> y;

	sum = x + y;
	difference = x - y;
	product = x * y;
	quotient = (float)x / y;

	cout << "Sum of " << x << " and " << y << " is " << sum << endl;
	cout << "Difference of " << x << " and " << y << " is " << difference << endl;
	cout << "Product of " << x << " and " << y << " is " << product << endl;
	cout << "Quotient of " << x << " and " << y << " is " << quotient << endl;
	cout << "Given numbers were " << x << " and " << y << "." << endl;

	return 0;
}