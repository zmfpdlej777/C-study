#include<stdio.h>
#include<stdlib.h>

//���� : �����͸� �����ϴ°���
//�迭 : ���� �ڷ������� �޸𸮻� ���ӵ� ����
//����ü : '�ٸ� �ڷ���'�� ��Ƽ� ���� ���� �ڷ��� (��������� �ڷ���)

	struct people { //������Ͽ� ����� �԰���
		char name[20]; //���ڹ迭
		int age;	   //����
		double ki; //�Ǽ�

	};
	typedef struct people People; //Ŭ���� �ձ��ڴ� �빮�� ����

	void showpeople(People someone) {
		printf("�̸� : %s, ���� : %d, Ű : %.1lf\n", someone.name, someone.age, someone.ki);
	}


int main() {
	char name[20] = "ȫ�浿";
	int age = 15;
	double ki = 176.6;

	struct people p1 = { "ȫ�浿",15,180.1 };
	struct people p2 = { "�߽���",18,175.6 };
	People p3 = { "���",20,178.8 };

	printf("%s,%d,%.1lf\n", p1.name,p1.age,p1.ki);
//	��� ����ü�� ����ϴ� ��� ���
//  = �������(����ü ���� ����)�� �����Ҷ��� '����ü.(dot)�������'�� ����Ѵ�.
//  ��> ��±����� ���ŷο�� �Լ�ȭ ��Ű��!
	showpeople(p2);
	showpeople(p3);
	
	


}