#include <iostream>
using namespace std;

int main() {
	string password;
	string repeat;

	cout << "Set a password: ";
	cin >> password;

	do {
		cout << "Repeat your password: ";
		cin >> repeat;
	} while (repeat == password);
}
