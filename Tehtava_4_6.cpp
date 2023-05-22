#include <iostream>
using namespace std;

int main() {
	string word;

	while (word != "Stop") {
		cout << "Give a word (for exit write Stop): ";
		cin >> word;
		cout << word << endl;
	}
}