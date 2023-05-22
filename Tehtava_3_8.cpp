#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	cout << "Write a word: ";
	cin >> word;

	cout << "You wrote: " << word << endl;

	if (word.length() < 5) {
		cout << "It is a short word" << endl;
	}
	else if (word.length() > 10) {
		cout << "It is a long word" << endl;
	}

	return 0;
}