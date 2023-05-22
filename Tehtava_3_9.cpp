#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1, word2;
	cout << "Give first word: ";
	cin >> word1;
	cout << "Give second word: ";
	cin >> word2;

	cout << "your given words: " << word1 << " and " << word2 << endl;

	if (word1.length() < 5 || word2.length() < 5) {
		cout << "Both words are short" << endl;
	}
	else if (word1.length() > 10 || word2.length() > 10) {
		cout << "Both words are long" << endl;
	}

	if (word1[0] == word2[0]) {
		cout << "Words are started with same letter" << endl;
	}
	else {
		cout << "Words are not started with same letter" << endl;
	}

	return 0;
}
