#include <iostream>
using namespace std;

int main() {
	int number = 0;
	//int count = 0;
	bool isPrime = true; //memory+, readability

	cout << "Input number : ";
	cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			//count++;
			isPrime = false; //remove add operation
		}
	}
	if (isPrime==true) {
		cout << number << " is prime number~\n";
	}
	else {
		cout << number << " is NOT prime number~\n";
	}


	return 0;
}