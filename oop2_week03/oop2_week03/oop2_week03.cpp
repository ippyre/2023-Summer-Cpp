#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int* pa = &a;
	void* pv = pa;
	cout << &a << " " << pa << '\n';
	cout << a << " " << *(int*)pv << '\n'; //유연함을 확보할 수 있지만 에러가 날 수 있음
	//(int*)가 아니라 *pv하면 에러 발생
	return 0;
}


