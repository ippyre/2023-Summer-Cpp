//student class를 만들어서 필수 필드는 이름, 학번

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	static int count; // =0 에러 발생
public:
	Student() {
		cout << "default constructor!" << '\n';
		count++;
	}//기본 생성자
	static int getCount() { //인라인 형태 -> 함수 호출에 오버헤드가 들지 않음
		return count;
	}
};
//생성자가 없기 때문에 기본 생성자가 생긴 상태 -> 객체를 생성할 때 count++해주고 싶은 상황
int Student::count = 0;

int main() {
	Student s1;
	cout << s1.getCount() << '\n';
	cout << Student::getCount() << '\n';
	return 0;
}