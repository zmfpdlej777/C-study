#include<iostream>
using namespace std;
class A {
public:
	A() {
		cout << "A생성자" << endl;
	}
	void sh() {
		cout << "A 함수" << endl;
	}
};

class B: virtual public A {
public:
	B() {
		cout << "B생성자" << endl;
	}
	void sh() {
		cout << "B 함수" << endl;
	}
};

class C: virtual public A {
public:
	C() {
		cout << "C생성자" << endl;
	}
	void sh() {
		cout << "C 함수" << endl;
	}
};
class D : public B,C {
public:
	D () {
		cout << "D생성자" << endl;
	}
	void sh() {
		cout << "D 함수" << endl;
	}
};




int main(void) {
	D d;
	d.C::sh();


	return 0;
}