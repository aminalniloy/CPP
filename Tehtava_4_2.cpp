# include <iostream>
using namespace std;

int main() {
	int number;
	int i;

	cout << "Give an integer: ";
	cin >> number;
	for (i = 1; i <= number; i += 2) {
		cout << i << endl;
	}
	return 0;
}