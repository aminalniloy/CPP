#include <iostream>
#include <string>
using namespace std;

int main() {
	int ika;
	string nimi;
	

	cout << "Write your name: ";
	cin >> nimi;
	cout << "Enter your age: ";
	cin >> ika;

	cout << "Hi " << nimi << ", You are " << ika << " years old." << endl;

	return 0;
}
