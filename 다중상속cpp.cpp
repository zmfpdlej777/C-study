#include<iostream>
using namespace std;
class A {
public:
	A() {
		cout << "A������" << endl;
	}
	void sh() {
		cout << "A �Լ�" << endl;
	}
};

class B: virtual public A {
public:
	B() {
		cout << "B������" << endl;
	}
	void sh() {
		cout << "B �Լ�" << endl;
	}
};

class C: virtual public A {
public:
	C() {
		cout << "C������" << endl;
	}
	void sh() {
		cout << "C �Լ�" << endl;
	}
};
class D : public B,C {
public:
	D () {
		cout << "D������" << endl;
	}
	void sh() {
		cout << "D �Լ�" << endl;
	}
};




int main(void) {
	D d;
	d.C::sh();


	return 0;
}