#include<iostream>
using namespace std;

class Test {
private:
	int m_n;
	static int m_num;

public:
	Test(int n, int num) :m_n(n) /*m_num(num)*/{
		//this->m_num = m_num; ����� �ʱ�ȭ ���
		Test::m_num = m_num; //this�� ��ü�� ��°��� class ��ü�� ��°� �ƴϱ� ������ �̹���� ��ȣ��
	}
	void disp() {
		cout << "��ü ��ȣ : " << m_n << "\t ��ü �� : " << m_num << endl;
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
	//Test::m_num = 20;				=> private�Ǹ� ���ٲ� => set
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