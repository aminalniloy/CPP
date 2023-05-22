# include <iostream>
# include <cctype>
using namespace std;

int main() {
	char direction;
	int number;
	int i = 0;

	cout << "Write A for Ascending or D for descending order" << endl;
	cin >> direction;
	direction = toupper(direction);

	cout << "Give a number: ";
	cin >> number;

	if (direction == 'A') {
		for (i = 0; i <= number; i++) {
			cout << i << endl;
		}
	}
	else {
		for (i = number; i >= 0; i--) {
			cout << i << endl;
		}
	}
}