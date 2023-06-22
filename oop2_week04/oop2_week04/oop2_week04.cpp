#include <iostream>
#include <string>
using namespace std;



int main() {
	int noOfPeople = 0;
	int total = 0;

	cout << "Input no of people : ";
	cin >> noOfPeople;
	int* pAge = new int[noOfPeople]; //dynamic memory allocation

	for (auto i = 0; i < noOfPeople; i++) {
		cout << "Input age : ";
		cin >> *(pAge + i); // cin >> pAge[i];
	}
	for (auto i = 0; i < noOfPeople; i++) {
		int age = pAge[i];
		if (age >= 19)
			total = total + 10000;
		else if (age >= 8) {
			total += 7000;
		}
		else {
			total += 5000;
		}
		
	}cout << "People : " << noOfPeople << ", Fee : " << total << '\n';
	delete[] pAge; //free heap memory(prevent memory leak)
	pAge = nullptr;


	return 0;
}