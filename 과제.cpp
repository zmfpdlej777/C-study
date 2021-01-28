#include<iostream>
using namespace std;
//사원 클래스를 만들고, 사원 클래스를 상속받는 정규직 사원 클래스와 임시사원 클래스를
//만들어 보자.
//- 정규사원의 실제 급여는 기본급에 수당을 합해서 구한다.
//- 임시사원의 실제 급여는 일당급여액에 근무일수를 합해서 구한다.
class sallay {
	virtual void payday() = 0;
};

class Employee {
//1. Employee 클래스
//- private 멤버변수
//이름, 주민등록번호
private:
	char* name;
	char* cnum;
public:
	Employee(const char* n,const char* c) :name(NULL), cnum(NULL) {

	}

};

class FullTime :public Employee,sallay {
//FullTime 클래스는 Employee 클래스 상속
//- private 멤버변수
//사원 코드, 기본급, 수당
//outData - 이름, 주민등록번호, 사원 코드, 기본급, 수당, 실제 급여 출력
private:
	char* code;
	int basic_sallay;
	int day_sallay;
public:
	FullTime(char* n,,int b, int d)
	void payday() {
		cout<<
	}

};

//PartTime 클래스는 Employee 클래스 상속
//- private 멤버변수
//일당급여액, 근무일수
//outData - 이름, 주민등록번호, 일당급여액, 근무일수, 실제 급여 출력




int main(void) {
//------------정규사원-------------- -
//성명 : 홍길동
//주민등록번호 : 901012 - 1234567
//사원 코드 : 20061201
//기본급 : 1500000
//수당 : 700000
//실제 급여 : 2200000
//------------임시사원-------------- -
//성명 : 김초아
//주민등록번호 : 920712 - 2345678
//일당급여액 : 50000
//근무일수 : 20
//실제 급여 : 1000000
	return 0;
}