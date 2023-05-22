#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE];
	int count = 0;

	// Ask user for numbers until they enter -1 and store them in array
	int num;
	cout << "Give numbers (write -1 to stop): ";
	cin >> num;
	while (num != -1 && count < MAX_SIZE) {
		arr[count] = num;
		count++;
		cin >> num;
	}

	// Sort array in ascending order and print it
	sort(arr, arr + count);
	cout << "The sorted array: ";
	for (int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Print original array
	cout << "The main array: ";
	for (int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Find and print minimum and maximum values in array
	int max_val = arr[0];
	int min_val = arr[count - 1];
	cout << "The Highest value: " << min_val << endl;
	cout << "The lowest value: " << max_val << endl;

	
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += arr[i];
	}
	cout << "The sum of all values: " << sum << endl;

	return 0;
}