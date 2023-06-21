#include <iostream>
using namespace std;

void test(int ra) {
	ra = 7;
}

int main() {
	int a = 1;
	cout << a << '\n';
	test(a);
	cout << a << '\n';
	return 0;
}