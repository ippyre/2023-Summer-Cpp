#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int* pa = &a;
	void* pv = pa;
	cout << &a << " " << pa << '\n';
	cout << a << " " << *(int*)pv << '\n'; //�������� Ȯ���� �� ������ ������ �� �� ����
	//(int*)�� �ƴ϶� *pv�ϸ� ���� �߻�
	return 0;
}


