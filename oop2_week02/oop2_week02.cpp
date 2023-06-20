#include <iostream>
using namespace std;

int main() {
	int number = 0;
	bool isPrime = true; //less memory, readability

	cout << "Input number : ";
	cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrime = false; //remove add operation
			break;
		}
		cout << i << " ";

	}
	if (isPrime) {
		cout << number << " is prime number~\n";
	}
	else {
		cout << number << " is NOT prime number~\n";
	}


	return 0;
}