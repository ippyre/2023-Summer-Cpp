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
			

		}
		return true;
	}

}
int main() {
	int n1 = 0;
	int n2 = 0;

	cout << "Input number #1: ";
	cin >> n1;
	cout << "Input number #2 : ";
	cin >> n2;

	if (n1 > n2) {
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	for (int i = n1; i <= n2; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}

	return 0;
}