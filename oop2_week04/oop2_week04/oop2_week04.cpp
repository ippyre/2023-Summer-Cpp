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

int main() {
	Student s1;
	cout << s1.getCount() << '\n';
	cout << Student::getCount() << '\n';
	return 0;
}