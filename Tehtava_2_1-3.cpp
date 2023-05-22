#include <iostream>
#include <string>
using namespace std;

int main() {
	int integer;
	string word;
	double decimal;

	cout << "Write an integer: ";
	cin >> integer;

	cout << "Write a word: ";
	cin >> word;

	cout << "Write a decimal number: ";
	cin >> decimal;

	cout << "You wrote:" << endl;
	cout << "An Integer: " << integer << endl;
	cout << "A Word: " << word << endl;
	cout << "A Decimal number: " << decimal << endl;

	return 0;
}