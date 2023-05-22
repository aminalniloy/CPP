#include <iostream>
using namespace std;

int main() {
	string password;
	string repeat;
	int attempts = 0;

	cout << "Provide a password: ";
	cin >> password;

	do {
		cout << "Repeat your password correctly: ";
		cin >> repeat;
		attempts++;
	} while (repeat != password && attempts < 3);

	if (repeat == password) {
		cout << "Password is correct!" << endl;
	}
	else {
		cout << "Password is wrong!" << endl;
	}

	return 0;
}