#include<iostream>
using namespace std;
//��� Ŭ������ �����, ��� Ŭ������ ��ӹ޴� ������ ��� Ŭ������ �ӽû�� Ŭ������
//����� ����.
//- ���Ի���� ���� �޿��� �⺻�޿� ������ ���ؼ� ���Ѵ�.
//- �ӽû���� ���� �޿��� �ϴ�޿��׿� �ٹ��ϼ��� ���ؼ� ���Ѵ�.
class sallay {
	virtual void payday() = 0;
};

class Employee {
//1. Employee Ŭ����
//- private �������
//�̸�, �ֹε�Ϲ�ȣ
private:
	char* name;
	char* cnum;
public:
	Employee(const char* n,const char* c) :name(NULL), cnum(NULL) {

	}

};

class FullTime :public Employee,sallay {
//FullTime Ŭ������ Employee Ŭ���� ���
//- private �������
//��� �ڵ�, �⺻��, ����
//outData - �̸�, �ֹε�Ϲ�ȣ, ��� �ڵ�, �⺻��, ����, ���� �޿� ���
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

//PartTime Ŭ������ Employee Ŭ���� ���
//- private �������
//�ϴ�޿���, �ٹ��ϼ�
//outData - �̸�, �ֹε�Ϲ�ȣ, �ϴ�޿���, �ٹ��ϼ�, ���� �޿� ���




int main(void) {
//------------���Ի��-------------- -
//���� : ȫ�浿
//�ֹε�Ϲ�ȣ : 901012 - 1234567
//��� �ڵ� : 20061201
//�⺻�� : 1500000
//���� : 700000
//���� �޿� : 2200000
//------------�ӽû��-------------- -
//���� : ���ʾ�
//�ֹε�Ϲ�ȣ : 920712 - 2345678
//�ϴ�޿��� : 50000
//�ٹ��ϼ� : 20
//���� �޿� : 1000000
	return 0;
}