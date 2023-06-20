#include <iostream>
using namespace std;

bool isPrime(int n) { //pass by value
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false; //remove add operation
			}
			cout << i << " ";

		}
		return true;
	}

}
int main() {
	int number = 0;

	cout << "Input number : ";
	cin >> number;

	if (isPrime(number)) {
		cout << number << " is prime number~\n";
	}
	else {
		cout << number << " is NOT prime number~\n";
	}

	return 0;
}