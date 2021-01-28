#include<iostream>
using namespace std;
class Animal {
private:
	string name;
public:
	Animal(string name) :name(name) {

	}
	void sh() {
		cout << "�̸� : " << name << endl;
	}
	virtual void bark() = 0; //virtual ����ȭ : �������̵��Ǹ� ���ٰ� ���
		//�ʿ�� ������ ���� ������ ����.
	    // => ���� ���� �Լ�
	
};

class Cat :public Animal {
public:
	Cat(string name) :Animal(name) {

	}
	virtual void bark() { //�ڽ�class���� vitual�� �Ⱥٿ��൵ ������, �˷��ִ� �������� �ٿ��ش�
		cout << "�߿�" << endl;
	}
	void eat() {
		cout << "����" << endl;
	}

};
class Dog :public Animal { //������
public:
	Dog(string name) :Animal(name) {

	}
	virtual void bark() { 
		cout << "�۸�" << endl;
	}
	void eat() {
		cout << "���" << endl;
	}

};
void eat(Dog* d) { 
	d->eat();
}
void eat(Cat* c) {
	c->eat();
}
void bark(Animal* a) {
	a->bark();
}
int main(void) {
	//Cat c1("�����");
	//
	//Cat* c2 = new Cat("�����");

	//c2->sh();

	Animal *a = new Cat("�����");
	a->bark();
	a->sh(); 
	//a->eat(); 

	Cat* c = (Cat *)a;//�θ�Ŭ���� ��ü ��ü�� �ѱ�°� �ƴ϶� �Ӽ��� �Ѱ��ִ°�

	Cat* ca = new Cat("�����");
	Dog* d = new Dog("��");

	eat(ca);
	eat(d);

	return 0;
}