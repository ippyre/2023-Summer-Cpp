#include <iostream>
using namespace std;

int main() {
	int number=0;
	int count = 0;
	cout << "Input number : ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		cout << number << " is prime number~\n";
	}
	else {
		cout << number << " is NOT prime number~\n";
	}

	return 0;
}