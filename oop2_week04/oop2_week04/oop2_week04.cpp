//student class�� ���� �ʼ� �ʵ�� �̸�, �й�

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	static int count; // =0 ���� �߻�
public:
	Student() {
		cout << "default constructor!" << '\n';
		count++;
	}//�⺻ ������
	static int getCount() { //�ζ��� ���� -> �Լ� ȣ�⿡ ������尡 ���� ����
		return count;
	}
};
//�����ڰ� ���� ������ �⺻ �����ڰ� ���� ���� -> ��ü�� ������ �� count++���ְ� ���� ��Ȳ
int Student::count = 0;

void test() {
	Student s3;
	cout << Student::getCount() << '\n';
}

int main() {
	Student s1;
	Student s2;

	cout << s1.getCount() << '\n'; //��ü �ν���
	cout << Student::getCount() << '\n'; //Ŭ���� �޼ҵ�(�ڹٿ��� �̷��Ը� �� �� ����?);
	test();
	cout << Student::getCount() << '\n'; // 3, ???
	return 0;
}