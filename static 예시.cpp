#include<iostream>
using namespace std;

class Test {
private:
	int m_n;
	static int m_num;

public:
	Test(int n, int num) :m_n(n) /*m_num(num)*/{
		//this->m_num = m_num; 비공식 초기화 방식
		Test::m_num = m_num; //this는 객체에 닿는거지 class 자체에 닿는게 아니기 때문에 이방법이 선호됨
	}
	void disp() {
		cout << "객체 번호 : " << m_n << "\t 객체 수 : " << m_num << endl;
	}
	static int get_num() {
		return m_num;
	}

};
int Test::m_num = 0;
void set_num(int n) {
		Test::m_num = n;
	}


int main(void) {
	//Test::m_num = 20;				=> private되면 못바꿈 => set
	//cout << Test::m_num << endl;
	Test::set_num(20);


	Test t1(1, 1);
	Test t2(2, 2);
	Test t3(3, 3);
	
	t1.disp();
	t2.disp();
	t3.disp();
	



	return 0;
}