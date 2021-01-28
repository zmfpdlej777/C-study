#include<iostream>
using namespace std;
class Animal {
private:
	string name;
public:
	Animal(string name) :name(name) {

	}
	void sh() {
		cout << "이름 : " << name << endl;
	}
	virtual void bark() = 0; //virtual 가상화 : 오버라이딩되면 없다고 취급
		//필요는 하지만 넣을 내용이 없다.
	    // => 순수 가상 함수
	
};

class Cat :public Animal {
public:
	Cat(string name) :Animal(name) {

	}
	virtual void bark() { //자식class에도 vitual을 안붙여줘도 되지만, 알려주는 느낌으로 붙여준다
		cout << "야옹" << endl;
	}
	void eat() {
		cout << "생선" << endl;
	}

};
class Dog :public Animal { //다형성
public:
	Dog(string name) :Animal(name) {

	}
	virtual void bark() { 
		cout << "멍멍" << endl;
	}
	void eat() {
		cout << "사료" << endl;
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
	//Cat c1("고양이");
	//
	//Cat* c2 = new Cat("삼색이");

	//c2->sh();

	Animal *a = new Cat("고양이");
	a->bark();
	a->sh(); 
	//a->eat(); 

	Cat* c = (Cat *)a;//부모클래스 객체 자체를 넘기는게 아니라 속성만 넘겨주는거

	Cat* ca = new Cat("고양이");
	Dog* d = new Dog("개");

	eat(ca);
	eat(d);

	return 0;
}